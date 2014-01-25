#include "mainwindow.h"
#include "ui_mainwindow.h"

const QString VERSION = "0.0.0.0 pre-alpha";

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    setDockOptions(QMainWindow::AnimatedDocks);

    createScene();

    ImageProcessor* imgP = new ImageProcessor();
    //int i = imgP->test("C:\\download.png");
   // qDebug() << "returned from imageproc, status: " << i;
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::createScene()
{
    scene = new QGraphicsScene(this);
    scene->setSceneRect(0, 0, 1920, 1080);
    ui->view->setScene(scene);

    setCentralWidget(ui->view);
}







