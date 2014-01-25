/********************************************************************************
** Form generated from reading UI file 'sceneviewdockwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SCENEVIEWDOCKWIDGET_H
#define UI_SCENEVIEWDOCKWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SceneViewDockWidget
{
public:
    QGridLayout *gridLayout;
    QLabel *label_dockTitle;
    QGroupBox *header_search;
    QHBoxLayout *horizontalLayout;
    QLineEdit *lineedit_searchterm;
    QPushButton *button_search;
    QListWidget *listwidget_sceneList;
    QPushButton *button_addScene;

    void setupUi(QWidget *SceneViewDockWidget)
    {
        if (SceneViewDockWidget->objectName().isEmpty())
            SceneViewDockWidget->setObjectName(QStringLiteral("SceneViewDockWidget"));
        SceneViewDockWidget->resize(400, 478);
        gridLayout = new QGridLayout(SceneViewDockWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_dockTitle = new QLabel(SceneViewDockWidget);
        label_dockTitle->setObjectName(QStringLiteral("label_dockTitle"));
        QFont font;
        font.setFamily(QStringLiteral("Segoe UI"));
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        label_dockTitle->setFont(font);

        gridLayout->addWidget(label_dockTitle, 0, 0, 1, 1);

        header_search = new QGroupBox(SceneViewDockWidget);
        header_search->setObjectName(QStringLiteral("header_search"));
        QFont font1;
        font1.setFamily(QStringLiteral("Segoe UI"));
        font1.setBold(false);
        font1.setWeight(50);
        header_search->setFont(font1);
        horizontalLayout = new QHBoxLayout(header_search);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        lineedit_searchterm = new QLineEdit(header_search);
        lineedit_searchterm->setObjectName(QStringLiteral("lineedit_searchterm"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lineedit_searchterm->sizePolicy().hasHeightForWidth());
        lineedit_searchterm->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(lineedit_searchterm);

        button_search = new QPushButton(header_search);
        button_search->setObjectName(QStringLiteral("button_search"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(button_search->sizePolicy().hasHeightForWidth());
        button_search->setSizePolicy(sizePolicy1);
        QFont font2;
        font2.setBold(true);
        font2.setWeight(75);
        button_search->setFont(font2);

        horizontalLayout->addWidget(button_search);


        gridLayout->addWidget(header_search, 1, 0, 1, 1);

        listwidget_sceneList = new QListWidget(SceneViewDockWidget);
        listwidget_sceneList->setObjectName(QStringLiteral("listwidget_sceneList"));

        gridLayout->addWidget(listwidget_sceneList, 2, 0, 1, 1);

        button_addScene = new QPushButton(SceneViewDockWidget);
        button_addScene->setObjectName(QStringLiteral("button_addScene"));
        QFont font3;
        font3.setFamily(QStringLiteral("Segoe UI"));
        button_addScene->setFont(font3);

        gridLayout->addWidget(button_addScene, 3, 0, 1, 1);


        retranslateUi(SceneViewDockWidget);

        QMetaObject::connectSlotsByName(SceneViewDockWidget);
    } // setupUi

    void retranslateUi(QWidget *SceneViewDockWidget)
    {
        SceneViewDockWidget->setWindowTitle(QApplication::translate("SceneViewDockWidget", "Form", 0));
        label_dockTitle->setText(QApplication::translate("SceneViewDockWidget", "Scenes", 0));
        header_search->setTitle(QApplication::translate("SceneViewDockWidget", "Search", 0));
        button_search->setText(QApplication::translate("SceneViewDockWidget", "Go!", 0));
        button_addScene->setText(QApplication::translate("SceneViewDockWidget", "Add scene", 0));
    } // retranslateUi

};

namespace Ui {
    class SceneViewDockWidget: public Ui_SceneViewDockWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SCENEVIEWDOCKWIDGET_H
