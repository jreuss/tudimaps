/********************************************************************************
** Form generated from reading UI file 'edititemdockwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITITEMDOCKWIDGET_H
#define UI_EDITITEMDOCKWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_EditItemDockWidget
{
public:
    QGridLayout *gridLayout;
    QGroupBox *group_position;
    QFormLayout *formLayout_2;
    QLabel *label_positionX;
    QDoubleSpinBox *spin_positionX;
    QLabel *label_positionY;
    QDoubleSpinBox *spin_positionY;
    QGroupBox *group_scale;
    QFormLayout *formLayout_3;
    QLabel *label_scale;
    QDoubleSpinBox *spin_scale;
    QGroupBox *group_fixture;
    QFormLayout *formLayout_5;
    QLabel *label_vertex;
    QLabel *label_vertexCount;
    QGroupBox *group_rotation;
    QFormLayout *formLayout_4;
    QLabel *label_rotation;
    QDoubleSpinBox *spin_rotation;
    QGroupBox *group_tag;
    QFormLayout *formLayout;
    QLabel *label_tag;
    QLabel *label_chosenTag;

    void setupUi(QWidget *EditItemDockWidget)
    {
        if (EditItemDockWidget->objectName().isEmpty())
            EditItemDockWidget->setObjectName(QStringLiteral("EditItemDockWidget"));
        EditItemDockWidget->resize(342, 320);
        EditItemDockWidget->setMinimumSize(QSize(0, 0));
        gridLayout = new QGridLayout(EditItemDockWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        group_position = new QGroupBox(EditItemDockWidget);
        group_position->setObjectName(QStringLiteral("group_position"));
        QFont font;
        font.setFamily(QStringLiteral("Segoe UI"));
        font.setBold(true);
        font.setWeight(75);
        group_position->setFont(font);
        formLayout_2 = new QFormLayout(group_position);
        formLayout_2->setObjectName(QStringLiteral("formLayout_2"));
        label_positionX = new QLabel(group_position);
        label_positionX->setObjectName(QStringLiteral("label_positionX"));
        QFont font1;
        font1.setBold(false);
        font1.setWeight(50);
        label_positionX->setFont(font1);

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_positionX);

        spin_positionX = new QDoubleSpinBox(group_position);
        spin_positionX->setObjectName(QStringLiteral("spin_positionX"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(spin_positionX->sizePolicy().hasHeightForWidth());
        spin_positionX->setSizePolicy(sizePolicy);
        spin_positionX->setFont(font1);
        spin_positionX->setMaximum(9999.99);

        formLayout_2->setWidget(0, QFormLayout::FieldRole, spin_positionX);

        label_positionY = new QLabel(group_position);
        label_positionY->setObjectName(QStringLiteral("label_positionY"));
        label_positionY->setFont(font1);

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_positionY);

        spin_positionY = new QDoubleSpinBox(group_position);
        spin_positionY->setObjectName(QStringLiteral("spin_positionY"));
        sizePolicy.setHeightForWidth(spin_positionY->sizePolicy().hasHeightForWidth());
        spin_positionY->setSizePolicy(sizePolicy);
        spin_positionY->setFont(font1);
        spin_positionY->setMaximum(9999.99);

        formLayout_2->setWidget(1, QFormLayout::FieldRole, spin_positionY);


        gridLayout->addWidget(group_position, 1, 0, 1, 1);

        group_scale = new QGroupBox(EditItemDockWidget);
        group_scale->setObjectName(QStringLiteral("group_scale"));
        group_scale->setFont(font);
        formLayout_3 = new QFormLayout(group_scale);
        formLayout_3->setObjectName(QStringLiteral("formLayout_3"));
        label_scale = new QLabel(group_scale);
        label_scale->setObjectName(QStringLiteral("label_scale"));
        label_scale->setFont(font1);

        formLayout_3->setWidget(0, QFormLayout::LabelRole, label_scale);

        spin_scale = new QDoubleSpinBox(group_scale);
        spin_scale->setObjectName(QStringLiteral("spin_scale"));
        sizePolicy.setHeightForWidth(spin_scale->sizePolicy().hasHeightForWidth());
        spin_scale->setSizePolicy(sizePolicy);
        spin_scale->setFont(font1);

        formLayout_3->setWidget(0, QFormLayout::FieldRole, spin_scale);


        gridLayout->addWidget(group_scale, 2, 0, 1, 1);

        group_fixture = new QGroupBox(EditItemDockWidget);
        group_fixture->setObjectName(QStringLiteral("group_fixture"));
        group_fixture->setFont(font);
        formLayout_5 = new QFormLayout(group_fixture);
        formLayout_5->setObjectName(QStringLiteral("formLayout_5"));
        label_vertex = new QLabel(group_fixture);
        label_vertex->setObjectName(QStringLiteral("label_vertex"));
        label_vertex->setFont(font1);

        formLayout_5->setWidget(0, QFormLayout::LabelRole, label_vertex);

        label_vertexCount = new QLabel(group_fixture);
        label_vertexCount->setObjectName(QStringLiteral("label_vertexCount"));
        label_vertexCount->setFont(font1);

        formLayout_5->setWidget(0, QFormLayout::FieldRole, label_vertexCount);


        gridLayout->addWidget(group_fixture, 4, 0, 1, 1);

        group_rotation = new QGroupBox(EditItemDockWidget);
        group_rotation->setObjectName(QStringLiteral("group_rotation"));
        group_rotation->setFont(font);
        formLayout_4 = new QFormLayout(group_rotation);
        formLayout_4->setObjectName(QStringLiteral("formLayout_4"));
        label_rotation = new QLabel(group_rotation);
        label_rotation->setObjectName(QStringLiteral("label_rotation"));
        label_rotation->setFont(font1);

        formLayout_4->setWidget(0, QFormLayout::LabelRole, label_rotation);

        spin_rotation = new QDoubleSpinBox(group_rotation);
        spin_rotation->setObjectName(QStringLiteral("spin_rotation"));
        sizePolicy.setHeightForWidth(spin_rotation->sizePolicy().hasHeightForWidth());
        spin_rotation->setSizePolicy(sizePolicy);
        spin_rotation->setFont(font1);
        spin_rotation->setMaximum(360);

        formLayout_4->setWidget(0, QFormLayout::FieldRole, spin_rotation);


        gridLayout->addWidget(group_rotation, 3, 0, 1, 1);

        group_tag = new QGroupBox(EditItemDockWidget);
        group_tag->setObjectName(QStringLiteral("group_tag"));
        group_tag->setFont(font);
        formLayout = new QFormLayout(group_tag);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        label_tag = new QLabel(group_tag);
        label_tag->setObjectName(QStringLiteral("label_tag"));
        label_tag->setFont(font1);

        formLayout->setWidget(0, QFormLayout::LabelRole, label_tag);

        label_chosenTag = new QLabel(group_tag);
        label_chosenTag->setObjectName(QStringLiteral("label_chosenTag"));
        label_chosenTag->setFont(font1);

        formLayout->setWidget(0, QFormLayout::FieldRole, label_chosenTag);


        gridLayout->addWidget(group_tag, 0, 0, 1, 1);


        retranslateUi(EditItemDockWidget);

        QMetaObject::connectSlotsByName(EditItemDockWidget);
    } // setupUi

    void retranslateUi(QWidget *EditItemDockWidget)
    {
        EditItemDockWidget->setWindowTitle(QApplication::translate("EditItemDockWidget", "Form", 0));
        group_position->setTitle(QApplication::translate("EditItemDockWidget", "Position", 0));
        label_positionX->setText(QApplication::translate("EditItemDockWidget", "X", 0));
        label_positionY->setText(QApplication::translate("EditItemDockWidget", "Y", 0));
        group_scale->setTitle(QApplication::translate("EditItemDockWidget", "Scale", 0));
        label_scale->setText(QApplication::translate("EditItemDockWidget", "Uniform scale factor", 0));
        group_fixture->setTitle(QApplication::translate("EditItemDockWidget", "Fixture", 0));
        label_vertex->setText(QApplication::translate("EditItemDockWidget", "Vertex count:", 0));
        label_vertexCount->setText(QApplication::translate("EditItemDockWidget", "None", 0));
        group_rotation->setTitle(QApplication::translate("EditItemDockWidget", "Rotation", 0));
        label_rotation->setText(QApplication::translate("EditItemDockWidget", "Angle", 0));
        group_tag->setTitle(QApplication::translate("EditItemDockWidget", "Tag", 0));
        label_tag->setText(QApplication::translate("EditItemDockWidget", "Object tag:", 0));
        label_chosenTag->setText(QApplication::translate("EditItemDockWidget", "...tag name...", 0));
    } // retranslateUi

};

namespace Ui {
    class EditItemDockWidget: public Ui_EditItemDockWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITITEMDOCKWIDGET_H
