#include <QApplication>
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QtWidgets/QApplication>
#include <QByteArray>



MainWindow::MainWindow(QWidget *parent) :
    ui(new Ui::MainWindow),
    QMainWindow(parent), tThread()
{

    ui->setupUi(this);
    ui->stackedWidget->setCurrentIndex(0);

    srand(QDateTime::currentDateTime().toTime_t());

    ui->chart->setInteractions(QCP::iRangeDrag);
    ui->chart->axisRect()->setRangeDrag(Qt::Horizontal);


    ui->chart->plotLayout()->insertRow(0);
    QCPTextElement *title = new QCPTextElement(ui->chart, "Title of Plot", QFont("sans", 12, QFont::Bold));

    ui->chart->plotLayout()->addElement(0, 0, title);
    ui->chart->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));

    ui->chart->legend->setVisible(false);


    ui->chart->addGraph(ui->chart->xAxis, ui->chart->yAxis);

    ui->chart->graph(0)->setPen(QPen(QColor(255, 100, 0)));

    ui->chart->graph(0)->setLineStyle(QCPGraph::lsLine);

    ui->chart->graph(0)->setScatterStyle(QCPScatterStyle(QCPScatterStyle::ssCross, 20));
    //ui->chart->graph(0)->setName("Humidity");


    ui->chart->addGraph(ui->chart->yAxis2,ui->chart->xAxis);

    ui->chart->graph(1)->setPen(QPen(QColor(180,80,100)));

    ui->chart->graph(1)->setLineStyle(QCPGraph::lsLine);

    ui->chart->graph(1)->setScatterStyle(QCPScatterStyle(QCPScatterStyle::ssCross, 20));

    //ui->chart->graph(1)->setName("Temperature");

    /*for(int i=0; i<count; i++)
        plot->graph()->data()[i] = y[i];*/

    //ui->chart->xAxis2->setVisible(true);

    ui->chart->yAxis2->setVisible(true);



    QSharedPointer<QCPAxisTickerTime> timeTicker(new QCPAxisTickerTime);
    timeTicker->setTimeFormat("day %d\n%h:%m:%s");
    ui->chart->xAxis->setTicker(timeTicker);


    ui->chart->xAxis->setLabel("Time");
    ui->chart->yAxis->setLabel("Humidity");
    ui->chart->yAxis2->setLabel("Temperature");


    ui->chart->xAxis->setTickLength(0, 1);
    ui->chart->xAxis->setSubTickLength(0, 1);


    //ui->chart->xAxis->setRange(x0, x1, Qt::AlignCenter );

    ui->chart->yAxis->setRange(20,80);
    ui->chart->yAxis2->setRange(0,50);



   /* ui->chart->xAxis->setRange(key, 0, Qt::AlignRight);
    ui->chart->xAxis->setScaleRatio(ui->chart->yAxis,1.0);*/

    tThread.setPlot(ui->chart);
    tThread.start();

//******


}

MainWindow::~MainWindow()
{
    tThread.deactivate();
    delete ui;
}

//Plots

//TO be done by the Arduino Communication
void MainWindow::SerialDataArrive(QString sPortsName)
{

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
void MainWindow::returnToStatus()
{
    if (isReturnToStatus==true){
    ui->stackedWidget->setCurrentIndex(1);
    isReturnToStatus=false;
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

void MainWindow::on_statusFullness_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
    isReturnToStatus=true;
}

void MainWindow::on_statusTemperature_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
    isReturnToStatus=true;
}

void MainWindow::on_statusHumidity_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);
    isReturnToStatus=true;
}

void MainWindow::on_proximityOpeningCheckBox_clicked(bool checked)
{
        if(checked){
        ui->proximityOpeningCheckBox->setText("Enabled");
        ui->openingSpeedLabel->setEnabled(true);
        ui->detectionRangeLabel->setEnabled(true);
        ui->openingSpeedScrollBar->setEnabled(true);
        ui->detectionRangeScrollBar->setEnabled(true);



        }else{
        ui->proximityOpeningCheckBox->setText("Disabled");
        ui->openingSpeedLabel->setEnabled(false);
        ui->detectionRangeLabel->setEnabled(false);
        ui->openingSpeedScrollBar->setEnabled(false);
        ui->detectionRangeScrollBar->setEnabled(false);

        QFile initFile("/home/andrej/ssp_miniproject/Trash_Can/trashCan.init");
        if(!initFile.open(QFile::ReadWrite | QFile::Text)){
            qDebug() << "File not opened";
            return;
        }
        QByteArray initFileContent = initFile.readAll();

        initFileContent.replace("proximity_opening = 0", "proximity_opening = 1");
        initFile.seek(0);
        initFile.write(initFileContent);
        initFile.flush();
        initFile.close();
        }
}
