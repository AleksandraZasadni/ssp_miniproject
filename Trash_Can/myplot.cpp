#include "myplot.h"

MyPlot::MyPlot(QWidget *parent): QCustomPlot(parent) {

}

void MyPlot::replot() {
    mut.lock();
    QCustomPlot::replot();
    mut.unlock();
}
