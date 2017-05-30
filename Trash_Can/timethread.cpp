#include "timethread.h"
#include <QtCore>
#include <QDebug>
#include <stdexcept>
#include <exception>

TimeThread::TimeThread()
{
   startTime = QDateTime::currentDateTime().currentSecsSinceEpoch();

}

void TimeThread::lockSlot(bool lock) {
    locked = lock;
    lockStatechanged = true;
}

void TimeThread::run()
{
    trashConnect = new serialConnection;
    while(active) {
        while(active && connected) {
            qint64 newTime = QDateTime::currentDateTime().currentSecsSinceEpoch();
            double timeSinceStart = (newTime - startTime);

            if(lockStatechanged) {
                lockStatechanged = false;
                trashConnect->changeLED(locked);
            }

            double full, temp, hum;
            try {
                std::tie(full, temp, hum) = trashConnect->readData();
            } catch (const std::invalid_argument& e ) {
                continue;
            }

            emit currentMessurement(full, temp, hum, timeSinceStart);

            this->msleep(1000);//
        }

    }

}
