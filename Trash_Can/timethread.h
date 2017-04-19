#ifndef TIMETHREAD_H
#define TIMETHREAD_H
#include <QtCore>
#include <QThread>
#include <QVector>
#include "qcustomplot.h"
#include "myplot.h"

class TimeThread : public QThread
{
    Q_OBJECT
public:
    TimeThread();
    void setProximityPlot(MyPlot *plot) {
        this->proximityPlot = plot;
    }

    void setFullnessPlot(MyPlot *plot){
        this->fullnessPlot = plot;
    }

    void setTemperaturePlot(MyPlot *plot){
        this->temperaturePlot = plot;
    }

    void setHumidityPlot(MyPlot *plot){
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

private:
     MyPlot *proximityPlot;
     MyPlot *fullnessPlot;
     MyPlot *temperaturePlot;
     MyPlot *humidityPlot;
     qint64 startTime;
     bool active = true;
     bool connected = true; //todo implement
};

#endif // TIMETHREAD_H
