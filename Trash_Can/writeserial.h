#ifndef WRITESERIAL_H
#define WRITESERIAL_H

#include <QDialog>
#include <QSerialPort>
#include <QByteArray>
#include "serialconnection.h"

class writeSerial : serialConnection
{
public:
    writeSerial();

private slots:
    void writeData(QString command);


};

#endif // WRITESERIAL_H
