#ifndef SERIALCONNECTION_H
#define SERIALCONNECTION_H

#include <QDialog>
#include <QtSerialPort/QSerialPort>
#include <QByteArray>
#include <QString>
#include <QObject>
#include <QMutex>
#include <QStringList>

class serialConnection : public QObject
{
    Q_OBJECT

public:
    serialConnection();
    ~serialConnection();
    void changeLED(bool checked);
    QVector<double> humidVect;
    QVector<double> tempVect;
    QVector<double> fullVect;
    QStringList sensorDataSecond;
    QStringList sensorDataThird;
    QString sensorDataFourth;

private slots:
    void readData();

private:
    int brightness;
    void updateLED(QString command);
    QString serialData; // If doesn't work, use QByteArray
    QString serialBuffer;
    QSerialPort *arduino;
    QString sPortName;
};

#endif // SERIALCONNECTION_H
