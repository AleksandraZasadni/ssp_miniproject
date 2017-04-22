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
    void changeLED(bool locked);
    void resample();
    void setDefaultVal(int setDist, int setSpeed);
    bool resampleNOW = 1;
    std::tuple<double, double, double> readData();

private:
    int brightness;
    void writeArd(QString command);
    QSerialPort *arduino;
    QString sPortName;
};

#endif // SERIALCONNECTION_H
