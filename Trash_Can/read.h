#ifndef SERIALCONNECTION_H
#define SERIALCONNECTION_H

#include <QDialog>
#include <QSerialPort>
#include <QByteArray>


class serialConnection : public QWidget{
    Q_OBJECT
public:

    serialConnection();
    ~serialConnection();

private slots:
    void writeSerial(QString command);

private:

    QSerialPort *arduino;
};

#endif // SERIALCONNECTION_H
