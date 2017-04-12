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

private:
    Ui::MainWindow *ui;
   /* QSplineSeries series;
    QChart chart;
    QDateTimeAxis xaxis;
    QValueAxis yaxis;
    QChartView chartView;*/


};

#endif // MAINWINDOW_H
