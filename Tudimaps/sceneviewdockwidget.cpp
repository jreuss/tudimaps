#include "sceneviewdockwidget.h"
#include "ui_sceneviewdockwidget.h"

SceneViewDockWidget::SceneViewDockWidget(QWidget *parent) : QWidget(parent), ui(new Ui::SceneViewDockWidget)
{
    ui->setupUi(this);

}

SceneViewDockWidget::~SceneViewDockWidget()
{
    delete ui;
}
