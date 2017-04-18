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

            //todo: insert sensor data here instead
            double y = (qrand() % 50) + 25;
            double y1 = (qrand() % 100) +5;
            double y2 = (qrand() % 50) + 10;
            double y3 = (qrand() % 50) + 25;

//bind the range with signals

           /* Attempt to rescale x axis dependent on time
            * static QTime time(QTime::currentTime());
            double key = newTime;
            static double lastPointKey = startTime;

            if(key - lastPointKey > 10)
            {
                proximityPlot->yAxis->rescale(true);
                proximityPlot->xAxis->rescale(true);
                lastPointKey = key;
            };*/

            proximityPlot->getMutex().lock();
            proximityPlot->graph()->addData(timeSinceStart, y);
            //proximityPlot->xAxis->setRange(key,5,Qt::AlignRight);
            proximityPlot->xAxis->rescale(true);
            proximityPlot->replot();
            proximityPlot->getMutex().unlock();

            /*fullnessPlot->graph()->addData(timeSinceStart, y1);
            fullnessPlot->xAxis->rescale(false);
            fullnessPlot->replot();

            temperaturePlot->graph()->addData(timeSinceStart,y2);
            temperaturePlot->xAxis->rescale(false);
            temperaturePlot->replot();

            humidityPlot->graph()->addData(timeSinceStart, y3);
            humidityPlot->xAxis->rescale(false);
            humidityPlot->replot();*/
            this->msleep(1000);//
        }

    }

}
