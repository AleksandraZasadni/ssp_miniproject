#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtCore/QDateTime>
#include <QtCore>
#include <QtCore/QCoreApplication>
#include <QInputDialog>
#include "qcustomplot.h"
<<<<<<< HEAD
#include <QFile>
#include <QString>
#include <QTextStream>
=======
#include <QTimer>
#include <QTime>
#include <QLabel>
#include "timethread.h"
>>>>>>> 7b674bf67d4e96da67fff311acc1fc128da0a808

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    //Plot
    void    SerialDataArrive( QString sPortName );
    //Gui buttons

    void on_pushButtonStatus_clicked();

    void on_pushButtonFullness_clicked();

    void on_pushButtonTemperature_clicked();

    void on_pushButtonHumidity_clicked();

    void on_pushButtonSettings_clicked();

    void on_pushButtonHelp_clicked();

    void on_pushButtonExit_clicked();

    void on_pushButtonReturn_1_clicked();

    void on_pushButtonReturn_2_clicked();

    void on_pushButtonReturn_3_clicked();

    void on_pushButtonReturn_4_clicked();

    void on_pushButtonReturn_5_clicked();

    void on_pushButtonReturn_6_clicked();

    void on_statusFullness_clicked();

    void on_statusTemperature_clicked();

    void on_statusHumidity_clicked();

    void on_proximityOpeningCheckBox_clicked(bool checked);

private:
    QVector<double> x0, y0, x1, y1;
    TimeThread tThread;
    Ui::MainWindow *ui;
    bool isReturnToStatus;

    void returnToStatus(); //Return buttons in Fullness, Temperature and Humidity return to Status is accessed from there

};

#endif // MAINWINDOW_H
