#ifndef TIMETHREAD_H
#define TIMETHREAD_H
#include <QtCore>
#include <QThread>
#include <QVector>
#include "qcustomplot.h"

class TimeThread : public QThread
{
    Q_OBJECT
public:
    TimeThread();
    void setPlot(QCustomPlot *plot) {
        this->plot = plot;
    }

    //QString name;
    //bool stop;
signals:
    void sendTime(QString time);

protected:
        void run();

private:
     QCustomPlot *plot;
     qint64 startTime;

};

#endif // TIMETHREAD_H
