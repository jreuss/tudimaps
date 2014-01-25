#ifndef SCENEVIEWDOCKWIDGET_H
#define SCENEVIEWDOCKWIDGET_H

#include <QWidget>
#include <QPropertyAnimation>

namespace Ui {
class SceneViewDockWidget;
}

class SceneViewDockWidget : public QWidget
{
    Q_OBJECT

public:
    explicit SceneViewDockWidget(QWidget *parent = 0);
    ~SceneViewDockWidget();

private:
    Ui::SceneViewDockWidget *ui;
};

#endif // SCENEVIEWDOCKWIDGET_H
