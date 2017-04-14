#include "writeserial.h"
#include <QSerialPort>
#include <QSerialPortInfo>
#include <string>
#include <QString>
#include <QDebug>

writeSerial::writeSerial()
{
//    QObject::connect(FROM, SIGNAL(Action), this, SLOT(writeData()));
}


void writeSerial::writeData(QString command){
    arduino->write(command.toStdString().c_str());
}
