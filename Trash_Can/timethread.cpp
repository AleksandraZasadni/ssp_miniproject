#include "timethread.h"
#include <QtCore>
#include <QDebug>

TimeThread::TimeThread()
{
   // startTime = QDateTime::currentDateTime().currentSecsSinceEpoch();
}



void TimeThread::run()
{
//    while(active) {

//        while(active && connected) {
//            qint64 newTime = QDateTime::currentDateTime().currentSecsSinceEpoch();
//            double timeSinceStart = (newTime - startTime);

<<<<<<< HEAD
//            //todo: insert sensor data
//            double y = (qrand() % 50) + 25;
=======
            //todo: insert sensor data here instead
            double y = (qrand() % 50) + 25;
            double y1 = (qrand() % 100) +5;
            double y2 = (qrand() % 50) + 10;
            double y3 = (qrand() % 50) + 25;

            /*
             *TODO: error checking -> set lower and upper range for xAxis
              QCustomPlot::QCPFinancialDataMap *pDataMap = m_ptrCandles->data();
            QCPFinancialDataMap::const_iterator lower = pDataMap->lowerBound(ui->chart->yAxis->range().lower);
            QCPFinancialDataMap::const_iterator upper = pDataMap->upperBound(ui->chart->yAxis->range().upper);


            double dHigh = std::numeric_limits<double>::min();
            double dLow = std::numeric_limits<double>::max();

            while (lower != upper)
            {
                if (lower.value().high > dHigh) dHigh = lower.value().high;
                if (lower.value().low < dLow) dLow = lower.value().low;
                lower++;
            }

            ui->chart->xAxis->setRange(dLow*0.99, dHigh*1.01);*/



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


            proximityPlot->graph()->addData(timeSinceStart, y);
            proximityPlot->xAxis->setRange(0,360);
            //proximityPlot->xAxis->rescale(true);
            proximityPlot->replot();

            fullnessPlot->graph()->addData(timeSinceStart, y1);
            fullnessPlot->xAxis->rescale(false);
            fullnessPlot->replot();

            temperaturePlot->graph()->addData(timeSinceStart,y2);
            //temperaturePlot->xAxis->rescale(false);
            temperaturePlot->replot();
>>>>>>> 00cdbd40316c4af181dd599144a5db107f12860a

            humidityPlot->graph()->addData(timeSinceStart, y3);
            //humidityPlot->xAxis->rescale(false);
            humidityPlot->replot();

<<<<<<< HEAD
//            plot->graph(0)->addData(timeSinceStart, y);
//            plot->xAxis->rescale(true);
//            plot->replot();
//            this->msleep(1000);
//        }
=======
            this->msleep(10000);//
        }
>>>>>>> 00cdbd40316c4af181dd599144a5db107f12860a

//    }

}
