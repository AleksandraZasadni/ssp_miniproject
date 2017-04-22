#include "serialconnection.h"
#include <QtSerialPort/QSerialPort>
#include <QtSerialPort/QSerialPortInfo>
#include <string>
#include <QString>
#include <QDebug>
#include <QVector>
#include <QVectorIterator>
#include <QThread>
#include <tuple>
#include <exception>
#include <stdexcept>

using namespace std;

serialConnection::serialConnection() : QObject(NULL){

    arduino = new QSerialPort();

    foreach(const QSerialPortInfo &serialPortInfo, QSerialPortInfo::availablePorts()){
        sPortName = serialPortInfo.portName();
    }

    arduino->setPortName(sPortName);
    arduino->setBaudRate(QSerialPort::Baud115200);
    arduino->setDataBits(QSerialPort::Data8);
    arduino->setFlowControl(QSerialPort::NoFlowControl);
    arduino->setParity(QSerialPort::NoParity);
    arduino->setStopBits(QSerialPort::OneStop);
    arduino->open(QSerialPort::ReadWrite);
}

serialConnection::~serialConnection(){
    if(arduino->isOpen()){
        arduino->close();
    }
}

tuple<double, double, double> serialConnection::readData() {
    QString ret = "";
    arduino->write(QString("s").toLocal8Bit());
    arduino->waitForBytesWritten(1000);
    arduino->waitForReadyRead(5000);
    ret = arduino->readLine();
    if(ret.length() != 18) {
        throw std::invalid_argument("incomplete reading");
    }
    QStringList sensorDataSecond = ret.left(22).split(',');
    double full = sensorDataSecond[0].toDouble();
    double temp = sensorDataSecond[1].toDouble();
    double hum = sensorDataSecond[2].toDouble();

    return make_tuple(full, temp, hum);
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
    arduino->waitForBytesWritten(1000);
    }
    qDebug() << brightness;
}

void serialConnection::resample(){ //this is activated with the "lock-button" - change this in mainwindow.cpp
    arduino->write((QString("s")).toStdString().c_str());
}

void serialConnection::setDefaultVal(int setDist, int setSpeed){
    int flah = 1; // used for the first one.. see next comment
    //arduino->write((QString("p%1").arg(flah)).toStdString().c_str()); //don't ask me why, but the first here is not working, no matter what, so i put in something useless for the rest to work
    //arduino->write((QString("q%1").arg(setSpeed)).toStdString().c_str());
    //arduino->write((QString("r%1").arg(setDist)).toStdString().c_str());
}

