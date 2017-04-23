#ifndef TIMETHREAD_H
#define TIMETHREAD_H
#include <QtCore>
#include <QThread>
#include <QVector>
#include "qcustomplot.h"
#include "myplot.h"
#include "serialconnection.h"

class TimeThread : public QThread
{
    Q_OBJECT
public:
    TimeThread(std::tuple<double *, double *, double *> current);
//    void setProximityPlot(MyPlot *plot) {
//        this->proximityPlot = plot;
//    }

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

public slots:
     void lockSlot(bool lock);

private:
    // MyPlot *proximityPlot;
     MyPlot *fullnessPlot;
     MyPlot *temperaturePlot;
     MyPlot *humidityPlot;
     qint64 startTime;
     bool active = true;
     bool connected = true; //todo implement
     serialConnection *trashConnect;
     std::tuple<double *, double *, double *> current;
     bool locked = false;
     bool lockStatechanged = false;
};

#endif // TIMETHREAD_H
