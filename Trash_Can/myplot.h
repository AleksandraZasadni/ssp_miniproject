#ifndef MYPLOT_H
#define MYPLOT_H

#include "qcustomplot.h"

class MyPlot : public QCustomPlot
{
public:
    virtual void replot() {
        mut.lock();
        QCustomPlot::replot();
        mut.unlock();
    }

    explicit MyPlot(QWidget *parent = 0);

private:
    QMutex mut;
};

#endif // MYPLOT_H
