#include "serialConnection.h"
#include "ui_dialog.h"
#include <QSerialPort>
#include <QSerialPortInfo>
#include <string>
#include <QString>
#include <QDebug> //To be deleted, only used for showcasing


serialConnection::serialConnection()
//from here...
{
    arduino = new QSerialPort();

    //Goes through all available serialports and gets info, then assign port name
    QString sPortName;
    foreach(const QSerialPortInfo &serialPortInfo, QSerialPortInfo::availablePorts()){
    sPortName = serialPortInfo.portName();
    }

        arduino->setPortName(sPortName);
        arduino->open(QSerialPort::WriteOnly);
        arduino->setBaudRate(QSerialPort::Baud115200);
        arduino->setDataBits(QSerialPort::Data8);
        arduino->setFlowControl(QSerialPort::NoFlowControl);
        arduino->setParity(QSerialPort::NoParity);
        arduino->setStopBits(QSerialPort::OneStop);
}

serialConnection::~serialConnection()
{
    if(arduino->isOpen()){
        arduino->close();
    }
}
//...to here - could be superclass.

void serialConnection::writeSerial(QString command){
    arduino->write(command.toStdString().c_str());

}
