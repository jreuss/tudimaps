#include "imageprocessor.h"

const uint8_t ALPHA_THRESSHOLD = 1;

ImageProcessor::ImageProcessor()
{

}

cv::Mat ImageProcessor::cvtColorToBinary(cv::Mat src)
{
    // create a one-channel (binary) image
    Mat dst(src.rows, src.cols, CV_8UC1);

    // pointer to the pixel data of the source image
    uint8_t* pixelPtr = (uint8_t*)src.data;
    int cn = src.channels();

    for(int i = 0; i < src.rows; i++)
    {
        for(int j = 0; j < src.cols; j++)
        {
            Scalar_<uint8_t> pix;
            for(int k = 0; k < cn; k++)
            {
                pix.val[k] = pixelPtr[i*src.cols*cn + j*cn + k];
            }

            // if we hit the alpha value, set that to 0 else 1
            dst.at<uchar>(i, j, 0) = (pix.val[cn - 1] < ALPHA_THRESSHOLD) ? 0 : 255;
        }
    }

    /* del allocated memory - I don't know if this is in fact necessary,
     * but I figure it can't hurt... */
    pixelPtr = NULL; delete pixelPtr;

    return dst;
}

std::vector<std::vector<cv::Point> > ImageProcessor::traceOutline(cv::Mat src)
{
    vector<vector<Point> > contours;

    findContours(src, contours, CV_RETR_EXTERNAL, CV_CHAIN_APPROX_NONE );

    return contours;
}


std::vector<cv::Point> ImageProcessor::decimateVerticies(std::vector<cv::Point> src, int epsilon)
{
    vector<Point> approxCurve;
    approxPolyDP(src, approxCurve, epsilon, true);

    return approxCurve;
}

int ImageProcessor::test(const string &filename)
{
    // Read the file
    Mat image = imread(filename, CV_LOAD_IMAGE_UNCHANGED);

    // Check for invalid input
    if(! image.data )
    {
        qDebug() <<  "Could not open or find the image";
        return -1;
    }

    Mat img_bin = cvtColorToBinary(image);
    copyMakeBorder( img_bin, img_bin, 1, 1, 1, 1, BORDER_CONSTANT, 0 );

    vector<vector<Point> > contours = traceOutline(img_bin);

    vector<Point> approxCurve = decimateVerticies(contours.front(), 3);

    // draw contour
    for (size_t idx = 0; idx < contours.size(); idx++) {
        drawContours(img_bin, contours, idx, 50);
    }

    foreach(Point x, approxCurve)
    {
        img_bin.data[x.y * img_bin.cols + x.x] = 255;
    }

    // show output
    cv::imshow("Contours", img_bin);

    cv::waitKey(0);

    // success!!
    return 0;
}
