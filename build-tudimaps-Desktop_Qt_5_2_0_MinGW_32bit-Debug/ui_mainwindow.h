/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>
#include <edititemdockwidget.h>
#include <graphicsview.h>
#include "sceneviewdockwidget.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    GraphicsView *view;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;
    QDockWidget *EditWidgetDock;
    EditItemDockWidget *EditDockItem;
    QDockWidget *dockWidget_3;
    QWidget *dockWidgetContents_5;
    QGridLayout *gridLayout_3;
    SceneViewDockWidget *widget;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(915, 629);
        MainWindow->setMinimumSize(QSize(0, 0));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        view = new GraphicsView(centralWidget);
        view->setObjectName(QStringLiteral("view"));
        view->setAutoFillBackground(false);
        view->setFrameShape(QFrame::StyledPanel);
        QBrush brush(QColor(28, 27, 32, 255));
        brush.setStyle(Qt::NoBrush);
        view->setBackgroundBrush(brush);

        gridLayout->addWidget(view, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 915, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);
        EditWidgetDock = new QDockWidget(MainWindow);
        EditWidgetDock->setObjectName(QStringLiteral("EditWidgetDock"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(EditWidgetDock->sizePolicy().hasHeightForWidth());
        EditWidgetDock->setSizePolicy(sizePolicy);
        EditWidgetDock->setFeatures(QDockWidget::AllDockWidgetFeatures);
        EditWidgetDock->setAllowedAreas(Qt::BottomDockWidgetArea|Qt::LeftDockWidgetArea|Qt::RightDockWidgetArea);
        EditDockItem = new EditItemDockWidget();
        EditDockItem->setObjectName(QStringLiteral("EditDockItem"));
        EditWidgetDock->setWidget(EditDockItem);
        MainWindow->addDockWidget(static_cast<Qt::DockWidgetArea>(2), EditWidgetDock);
        dockWidget_3 = new QDockWidget(MainWindow);
        dockWidget_3->setObjectName(QStringLiteral("dockWidget_3"));
        dockWidgetContents_5 = new QWidget();
        dockWidgetContents_5->setObjectName(QStringLiteral("dockWidgetContents_5"));
        gridLayout_3 = new QGridLayout(dockWidgetContents_5);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        widget = new SceneViewDockWidget(dockWidgetContents_5);
        widget->setObjectName(QStringLiteral("widget"));

        gridLayout_3->addWidget(widget, 0, 0, 1, 1);

        dockWidget_3->setWidget(dockWidgetContents_5);
        MainWindow->addDockWidget(static_cast<Qt::DockWidgetArea>(1), dockWidget_3);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
