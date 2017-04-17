#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtCore/QDateTime>
#include <QtCore>
#include <QtCore/QCoreApplication>
#include <QInputDialog>
#include "qcustomplot.h"
#include <QFile>
#include <QString>
#include <QTextStream>

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
    Ui::MainWindow *ui;
    bool isReturnToStatus;

    void returnToStatus(); //Return buttons in Fullness, Temperature and Humidity return to Status is accessed from there

};

#endif // MAINWINDOW_H
