#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QGraphicsScene>
#include <QMainWindow>
#include <QDockWidget>
#include <QLabel>

#include "imageprocessor.h"
#include "graphicsview.h"
#include "edititemdockwidget.h"

namespace Ui
{
    class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    QGraphicsScene *scene;

    void createScene();
    void createActions();
    void createMenuAndToolbars();
    void createConnections();
};

#endif // MAINWINDOW_H
