#include "timethread.h"
#include <QtCore>
#include <QDebug>


TimeThread::TimeThread()
{
    startTime = QDateTime::currentDateTime().currentSecsSinceEpoch();
}

void TimeThread::run()
{
    while(active) {

        while(active && connected) {
            qint64 newTime = QDateTime::currentDateTime().currentSecsSinceEpoch();
            double timeSinceStart = (newTime - startTime);

            //todo: insert sensor data
            double y = (qrand() % 50) + 25;


            plot->graph(0)->addData(timeSinceStart, y);
            plot->xAxis->rescale(true);
            plot->replot();
            this->msleep(1000);
        }

    }

}
