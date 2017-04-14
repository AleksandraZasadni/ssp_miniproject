#ifndef SERIALCONNECTION_H
#define SERIALCONNECTION_H

#include <QDialog>
#include <QtSerialPort/QSerialPort>
#include <QByteArray>
#include <QString>
#include <QObject>

class serialConnection : public QObject
{
    Q_OBJECT

public:
    serialConnection();
    ~serialConnection();

protected:
    QSerialPort *arduino;
    QString sPortName;

};

#endif // SERIALCONNECTION_H
