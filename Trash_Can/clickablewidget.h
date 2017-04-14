#ifndef CLICKABLEWIDGET_H
#define CLICKABLEWIDGET_H

#include <QWidget>

class clickableWidget : public QWidget
{
    Q_OBJECT

public:
    explicit clickableWidget(QWidget *parent = 0);

signals:
   void clicked();

protected:
   void mousePressEvent(QMouseEvent* event);

};

#endif // CLICKABLEWIDGET_H
