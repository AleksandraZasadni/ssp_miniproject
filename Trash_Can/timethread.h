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
    void deactivate() {
        active = false;
        while(!this->isFinished());
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
     bool active = true;
     bool connected = true; //todo implement
};

#endif // TIMETHREAD_H
