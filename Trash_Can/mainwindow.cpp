#include <QApplication>
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtCharts/QChartView>
#include <QtCharts/QLineSeries>
#include <QtCharts/QSplineSeries>
#include <QtCharts/QValueAxis>
#include <QtCharts/QCategoryAxis>


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{

    ui->setupUi(this);
    ui->stackedWidget->setCurrentIndex(0);


       /* QChart *chart = new QChart();
        chart->legend()->hide();
        chart->setTitle("Multiaxis chart example");

        QValueAxis *axisX = new QValueAxis;
        axisX->setTickCount(10);
        chart->addAxis(axisX, Qt::AlignBottom);

        QSplineSeries *series = new QSplineSeries;
        *series << QPointF(1, 5) << QPointF(3.5, 18) << QPointF(4.8, 7.5) << QPointF(10, 2.5);
        chart->addSeries(series);

        QValueAxis *axisY = new QValueAxis;
        axisY->setLinePenColor(series->pen().color());

        chart->addAxis(axisY, Qt::AlignLeft);
        series->attachAxis(axisX);
        series->attachAxis(axisY);

        series = new QSplineSeries;
        *series << QPointF(1, 0.5) << QPointF(1.5, 4.5) << QPointF(2.4, 2.5) << QPointF(4.3, 12.5)
                << QPointF(5.2, 3.5) << QPointF(7.4, 16.5) << QPointF(8.3, 7.5) << QPointF(10, 17);
        chart->addSeries(series);

        QCategoryAxis *axisY3 = new QCategoryAxis;
        axisY3->append("Low", 5);
        axisY3->append("Medium", 12);
        axisY3->append("High", 17);
        axisY3->setLinePenColor(series->pen().color());
        axisY3->setGridLinePen((series->pen()));

        chart->addAxis(axisY3, Qt::AlignRight);
        series->attachAxis(axisX);
        series->attachAxis(axisY3);

        QChartView *chartView = new QChartView(chart);
        chartView->setRenderHint(QPainter::Antialiasing);


   /* chart.legend()->hide();
    chart.setTitle("Test Plot");

    xaxis.setTickCount(10);
    xaxis.setFormat("MMM yyyy");
    xaxis.setTitleText("Date");
    chart.addAxis(xaxis, Qt::AlignBottom);
    //series.attachAxis(xaxis);

    series << QPointF(1, 5) << QPointF(3.5, 18) << QPointF(4.8, 7.5) << QPointF(10, 2.5);
    chart.addSeries(series);

    yaxis.setLabelFormat("%i");
    yaxis.setTitleText("Number of Test Dots");
    //chart.addAxis(yaxis, Qt::AlignLeft);
    //series.attachAxis(yaxis);*/

}

MainWindow::~MainWindow()
{
    delete ui;
}

//MAIN SCREEN

void MainWindow::on_pushButtonStatus_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

void MainWindow::on_pushButtonFullness_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}

void MainWindow::on_pushButtonTemperature_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}

void MainWindow::on_pushButtonHumidity_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);
}

void MainWindow::on_pushButtonSettings_clicked()
{
    ui->stackedWidget->setCurrentIndex(5);
}

void MainWindow::on_pushButtonHelp_clicked()
{
    ui->stackedWidget->setCurrentIndex(6);
}

void MainWindow::on_pushButtonExit_clicked()
{
    QApplication::quit();
}

//RETURN BUTTONS
bool returnStatus;
MainWindow::returnToStatus()
{
    if (returnStatus==true){
    ui->stackedWidget->setCurrentIndex(1);
    returnStatus=false;
    } else
    ui->stackedWidget->setCurrentIndex(0);
}



void MainWindow::on_pushButtonReturn_1_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void MainWindow::on_pushButtonReturn_2_clicked()
{
    MainWindow::returnToStatus();
}

void MainWindow::on_pushButtonReturn_3_clicked()
{
    MainWindow::returnToStatus();
}

void MainWindow::on_pushButtonReturn_4_clicked()
{
    MainWindow::returnToStatus();
}

void MainWindow::on_pushButtonReturn_5_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void MainWindow::on_pushButtonReturn_6_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}


//STATUS


void MainWindow::on_pushButtonStatusFullness_clicked()
{
     ui->stackedWidget->setCurrentIndex(2);
     returnStatus=true;
}

void MainWindow::on_pushButtonStatusTemperature_clicked()
{
     ui->stackedWidget->setCurrentIndex(3);
     returnStatus=true;
}

void MainWindow::on_pushButtonStatusHumidity_clicked()
{
     ui->stackedWidget->setCurrentIndex(4);
     returnStatus=true;
}
