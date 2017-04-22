#include "timethread.h"
#include <QtCore>
#include <QDebug>
#include <stdexcept>
#include <exception>

TimeThread::TimeThread(std::tuple<double *, double *, double *> current): current(current)
{
   startTime = QDateTime::currentDateTime().currentSecsSinceEpoch();

}

void TimeThread::run()
{
    trashConnect = new serialConnection;
    while(active) {
        while(active && connected) {
            qint64 newTime = QDateTime::currentDateTime().currentSecsSinceEpoch();
            double timeSinceStart = (newTime - startTime);

            double full, temp, hum;
            //trashConnect->changeLED(true);
            try {
                std::tie(full, temp, hum) = trashConnect->readData();
            } catch (const std::invalid_argument& e ) {
                continue;
            }

            double *cfull, *ctemp, *chum;
            std::tie(cfull, ctemp, chum) = current;
            *cfull = full;
            *ctemp = temp;
            *chum = hum;

            fullnessPlot->graph()->addData(timeSinceStart, full);
            fullnessPlot->xAxis->rescale(false);
            fullnessPlot->replot();

            temperaturePlot->graph()->addData(timeSinceStart, temp);
            temperaturePlot->xAxis->rescale(false);
            temperaturePlot->replot();

            humidityPlot->graph()->addData(timeSinceStart, hum);
            humidityPlot->xAxis->rescale(false);
            humidityPlot->replot();

            this->msleep(2000);//
        }

    }

}
