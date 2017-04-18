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
    void setProximityPlot(QCustomPlot *plot) {
        this->proximityPlot = plot;
    }

    void setFullnessPlot(QCustomPlot *plot){
        this->fullnessPlot = plot;
    }

    void setTemperaturePlot(QCustomPlot *plot){
        this->temperaturePlot = plot;
    }

    void setHumidityPlot(QCustomPlot *plot){
        this->humidityPlot = plot;
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
        void rescaleXAxis();

private:
     QCustomPlot *proximityPlot;
     QCustomPlot *fullnessPlot;
     QCustomPlot *temperaturePlot;
     QCustomPlot *humidityPlot;
     qint64 startTime;
     bool active = true;
     bool connected = true; //todo implement
};

#endif // TIMETHREAD_H
