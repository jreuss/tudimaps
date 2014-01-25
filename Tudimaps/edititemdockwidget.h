#ifndef EDITITEMDOCKWIDGET_H
#define EDITITEMDOCKWIDGET_H

#include <QWidget>

namespace Ui {
class EditItemDockWidget;
}

class EditItemDockWidget : public QWidget
{
    Q_OBJECT

public:
    explicit EditItemDockWidget(QWidget *parent = 0);
    ~EditItemDockWidget();

    // getters and setters
   void setTag(const QString &tag);
   void setPosition(QPointF &position);
   void setRotation(const qreal &rotation);
   void setScale(const qreal &scale);
   void setSize(const QRectF &size);

   QString getTag() const;

private:
    Ui::EditItemDockWidget *ui;
};

#endif // EDITITEMDOCKWIDGET_H
