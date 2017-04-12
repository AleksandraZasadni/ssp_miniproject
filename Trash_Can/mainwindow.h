#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtCharts/QChartView>
#include <QtCharts/QLineSeries>
#include <QtCore/QDateTime>
#include <QtCharts/QDateTimeAxis>
#include <QtCharts/QValueAxis>
#include <QtCharts/QAbstractSeries>
#include <QtCore>
#include <QtCharts/QSplineSeries>
#include <QtCharts/QCategoryAxis>



using namespace QtCharts;
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

    void on_pushButtonStatusFullness_clicked();

    void on_pushButtonStatusTemperature_clicked();

    void on_pushButtonStatusHumidity_clicked();

private:
    Ui::MainWindow *ui;
    returnToStatus(); //Return buttons in Fullness, Temperature and Humidity return to Status is accessed from there

    QSplineSeries series;
    QChart chart;
    QDateTimeAxis xaxis;
    QValueAxis yaxis;
    QChartView chartView;
};

#endif // MAINWINDOW_H
