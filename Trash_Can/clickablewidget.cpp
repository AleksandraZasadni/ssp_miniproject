#include "clickablewidget.h"

clickableWidget::clickableWidget(QWidget *parent) : QWidget(parent){}

void clickableWidget::mousePressEvent(QMouseEvent* event) {
   emit clicked();
}
