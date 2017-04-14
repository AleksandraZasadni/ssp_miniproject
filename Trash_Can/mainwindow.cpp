#include <QApplication>
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QtWidgets/QApplication>



MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{

    ui->setupUi(this);
    ui->stackedWidget->setCurrentIndex(0);

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
void MainWindow::returnToStatus()
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
