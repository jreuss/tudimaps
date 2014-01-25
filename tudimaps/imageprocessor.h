#ifndef IMAGEPROCESSOR_H
#define IMAGEPROCESSOR_H

#include <QDebug>
#include <opencv2/opencv.hpp>
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/photo/photo.hpp>
#include <vector>

using namespace std;
using namespace cv;

class ImageProcessor
{
public:
    ImageProcessor();

    vector<vector<Point> > traceOutline(Mat src);
    Mat cvtColorToBinary(Mat src);
    vector<Point> decimateVerticies(vector<Point> src, int epsilon = 1);
    int test(const string & filename);
};

#endif // IMAGEPROCESSOR_H
