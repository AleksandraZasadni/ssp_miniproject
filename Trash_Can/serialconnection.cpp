#include "serialconnection.h"
#include <QtSerialPort/QSerialPort>
#include <QtSerialPort/QSerialPortInfo>
#include <string>
#include <QString>
#include <QDebug>
#include <QVector>
#include <QVectorIterator>
#include <QThread>


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

    serialData = arduino->readAll();
    sensorDataSecond = serialData.split(',');
    for(int i=0; i<sensorDataSecond.size()-1; i++){
        sensorDataThird = sensorDataSecond[i].split('_');
        if (sensorDataThird[0] == "f"){
            sensorDataFourth = sensorDataThird[1];
            fullVect.push_back(sensorDataFourth.toDouble());
//            QVectorIterator<double> i(fullVect);
//            while (i.hasNext())
//                qDebug() << i.next();
        }
        else if (sensorDataThird[0] == "t"){
            sensorDataFourth = sensorDataThird[1];
            tempVect.push_back(sensorDataFourth.toDouble());
//                QVectorIterator<double> i(tempVect);
//                while (i.hasNext())
//                    qDebug() << i.next();
        }
        else if (sensorDataThird[0] == "h"){
            sensorDataFourth = sensorDataThird[1];
            humidVect.push_back(sensorDataFourth.toDouble());
//            QVectorIterator<double> i(humidVect);
//            while (i.hasNext())
//                qDebug() << i.next();
        }
        else{
        }
    }

//    QStringList bufferSplit = serialBuffer.split(",");

//    if(bufferSplit.length() < 3){
//        serialBuffer = QString::fromStdString(serialData.toStdString());
//    }
//    else{
//        serialBuffer = "";
//        for (int i; i; i++){

//    }
}

void serialConnection::changeLED(bool locked){
    if (locked){
        brightness = 255;
    }
    else{
        brightness = 0;
    }
    for (int i = 0; i<3; i++){
    arduino->write((QString("l%1").arg(brightness)).toStdString().c_str());
    }
    qDebug() << brightness;
}

void serialConnection::resample(){ //this is activated with the "lock-button" - change this in mainwindow.cpp
    arduino->write((QString("s")).toStdString().c_str());
}

void serialConnection::setDefaultVal(int setDist, int setSpeed){
    int flah = 1; // used for the first one.. see next comment
    arduino->write((QString("p%1").arg(flah)).toStdString().c_str()); //don't ask me why, but the first here is not working, no matter what, so i put in something useless for the rest to work
    arduino->write((QString("q%1").arg(setSpeed)).toStdString().c_str());
    arduino->write((QString("r%1").arg(setDist)).toStdString().c_str());
}

