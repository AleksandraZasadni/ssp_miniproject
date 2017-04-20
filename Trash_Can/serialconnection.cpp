#include "serialconnection.h"
#include <QtSerialPort/QSerialPort>
#include <QtSerialPort/QSerialPortInfo>
#include <string>
#include <QString>
#include <QDebug>
#include <QVector>
#include <QVectorIterator>


serialConnection::serialConnection() : QObject(NULL){

    arduino = new QSerialPort();

    foreach(const QSerialPortInfo &serialPortInfo, QSerialPortInfo::availablePorts()){
        sPortName = serialPortInfo.portName();
    }

    arduino->setPortName(sPortName);
    arduino->open(QSerialPort::ReadWrite);
    arduino->setBaudRate(QSerialPort::Baud115200);
    arduino->setDataBits(QSerialPort::Data8);
    arduino->setFlowControl(QSerialPort::NoFlowControl);
    arduino->setParity(QSerialPort::NoParity);
    arduino->setStopBits(QSerialPort::OneStop);
    QObject::connect(arduino, SIGNAL(readyRead()), this, SLOT(readData()));

}

serialConnection::~serialConnection(){
    if(arduino->isOpen()){
        arduino->close();
    }
}

void serialConnection::readData(){
//    QStringList bufferSplit = serialBuffer.split(",");

    serialData = arduino->readAll();
    sensorDataSecond = serialData.split(',');
    for(int i=0; i<sensorDataSecond.size()-1; i++){
        sensorDataThird = sensorDataSecond[i].split('_');
        if (sensorDataThird[0] == "f"){
            sensorDataFourth = sensorDataThird[1];
            fullVect.push_back(sensorDataFourth.toDouble());
            QVectorIterator<double> i(fullVect);
            while (i.hasNext())
                qDebug() << i.next();
        }
        else if (sensorDataThird[0] == "t"){
            sensorDataFourth = sensorDataThird[1];
            tempVect.push_back(sensorDataFourth.toDouble());
                QVectorIterator<double> i(tempVect);
                while (i.hasNext())
                    qDebug() << i.next();
        }
        else if (sensorDataThird[0] == "h"){
            sensorDataFourth = sensorDataThird[1];
            humidVect.push_back(sensorDataFourth.toDouble());
            QVectorIterator<double> i(humidVect);
            while (i.hasNext())
                qDebug() << i.next();
        }
        else{
        }
    }


//    if(bufferSplit.length() < 3){
//        serialBuffer = QString::fromStdString(serialData.toStdString());
//    }
//    else{
//        serialBuffer = "";
//        for (int i; i; i++){

//    }
}

void serialConnection::changeLED(bool checked){
    if (checked){
        brightness = 255;
    }
    else{
        brightness = 0;
    }
    serialConnection::writeArd(QString("b%1").arg(brightness));
}

void serialConnection::resample(bool resampleNOW){ //right now this is activated with the "lock-button" - change this in mainwindow.cpp

    serialConnection::writeArd(QString("b%1").arg(100));
}

void serialConnection::writeArd(QString command){
    qDebug() << command;
    arduino->write(command.toStdString().c_str());
}
