#include "serialconnection.h"
#include <QtSerialPort/QSerialPort>
#include <QtSerialPort/QSerialPortInfo>
#include <string>
#include <QString>
#include <QDebug>
#include <QVector>


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
    QStringList bufferSplit = serialBuffer.split(",");

    serialData = arduino->readAll();
//    qDebug() << serialData;
    sensorDataSecond = serialData.split(',');
    for(int i=0;i<sensorDataSecond.size()-1;i++){
        sensorDataThird = sensorDataSecond[i].split(' ');
        if (sensorDataThird[0] == "f"){
            fullVect.push_back(serialData.toDouble());
        }
        else if (sensorDataThird[0] == "t"){
            tempVect.push_back(serialData.toDouble());
        }
        else if (sensorDataThird[0] == "h"){
            humidVect.push_back(serialData.toDouble());
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
    serialConnection::updateLED(QString("b%1").arg(brightness));
}

void serialConnection::updateLED(QString command){
    arduino->write(command.toStdString().c_str());
}
