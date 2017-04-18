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
            double y1 = (qrand() % 100) +5;
            double y2 = (qrand() % 50) + 10;
            double y3 = (qrand() % 50) + 25;

            proximityPlot->graph()->addData(timeSinceStart, y);

            proximityPlot->replot();
            this->msleep(1000);//

            fullnessPlot->graph()->addData(timeSinceStart, y1);
            fullnessPlot->xAxis->rescale(false);
            fullnessPlot->replot();
            this->msleep(1000);

            temperaturePlot->graph()->addData(timeSinceStart,y2);
            temperaturePlot->xAxis->rescale(false);
            temperaturePlot->replot();
            this->msleep(1000);

            humidityPlot->graph()->addData(timeSinceStart, y3);
            humidityPlot->xAxis->rescale(false);
            humidityPlot->replot();
            this->msleep(1000);

            //plot2->graph(0)->addData(timeSinceStart, y);
            //plot2->xAxis->rescale(true);
            //plot2->replot();
            //this->msleep(1000);

           /* plot3->graph(0)->addData(timeSinceStart, y);
            plot3->xAxis->rescale(true);
            plot3->replot();
            this->msleep(1000);

            plot4->graph(0)->addData(timeSinceStart, y);
            plot4->xAxis->rescale(true);
            plot4->replot();
            this->msleep(1000);*/

        }

    }

}
