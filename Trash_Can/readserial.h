#ifndef READSERIAL_H
#define READSERIAL_H

#include "serialconnection.h"
#include <QDialog>
#include <QtSerialPort/QSerialPort>
#include <QByteArray>

class readSerial : serialConnection{
public:
    readSerial();

private slots:
    void readData();

private:
    QByteArray serialData;
    QString serialBuffer;

};

#endif // READSERIAL_H
