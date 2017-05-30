#ifndef MYPLOT_H
#define MYPLOT_H

#include "qcustomplot.h"

class MyPlot : public QCustomPlot
{
public:
    virtual void replot();

    explicit MyPlot(QWidget *parent = 0);

private:
    QMutex mut;
};

#endif // MYPLOT_H
