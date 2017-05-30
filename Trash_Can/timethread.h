#ifndef TIMETHREAD_H
#define TIMETHREAD_H
#include <QtCore>
#include <QThread>
#include <QVector>
#include "qcustomplot.h"
#include "myplot.h"
#include "serialconnection.h"
#include <tuple>

class TimeThread : public QThread
{
    Q_OBJECT
public:
    TimeThread();

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

signals:
    void sendTime(QString time);
    void currentMessurement(double full, double temp, double hum, double time);

protected:
        void run();

public slots:
     void lockSlot(bool lock);

private:

     MyPlot *fullnessPlot;
     MyPlot *temperaturePlot;
     MyPlot *humidityPlot;
     qint64 startTime;
     bool active = true;
     bool connected = true;
     serialConnection *trashConnect;
     bool locked = false;
     bool lockStatechanged = false;
};

#endif // TIMETHREAD_H
