#include "edititemdockwidget.h"
#include "ui_edititemdockwidget.h"

EditItemDockWidget::EditItemDockWidget(QWidget *parent) : QWidget(parent),
    ui(new Ui::EditItemDockWidget)
{
    ui->setupUi(this);
}

/*===============================================
 * REGION: setters and getters
 * ============================================*/

void EditItemDockWidget::setTag(const QString &tag)
{
    // test git
    ui->label_chosenTag->setText(tag);
}

void EditItemDockWidget::setPosition(QPointF &position)
{
    ui->spin_positionX->setValue(position.rx());
    ui->spin_positionY->setValue(position.ry());
}

void EditItemDockWidget::setRotation(const qreal &rotation)
{
    ui->spin_rotation->setValue(rotation);
}

void EditItemDockWidget::setScale(const qreal &scale)
{
    ui->spin_scale->setValue(scale);
}

QString EditItemDockWidget::getTag() const
{
    return ui->label_chosenTag->text();
}
// END REGION

EditItemDockWidget::~EditItemDockWidget()
{
    delete ui;
}
