#include "readserial.h"
#include <QtSerialPort/QSerialPort>
#include <QtSerialPort/QSerialPortInfo>
#include <string>
#include <QString>
#include <QDebug>
#include <QObject>



readSerial::readSerial()

{
        QObject::connect(arduino, SIGNAL(readyRead()), this, SLOT(readData()));
}

void readSerial::readData(){
    QStringList bufferSplit = serialBuffer.split(","); //split by commas, because split by commas in arduino

    serialData = arduino->readAll();
    if(bufferSplit.length() == 1){
        serialBuffer = QString::fromStdString(serialData.toStdString());
    }
    else{
            serialBuffer = "";
            qDebug() << bufferSplit[0] << "\n";
    }
}
