#include <QApplication>
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QtWidgets/QApplication>
#include <QByteArray>



MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{

    ui->setupUi(this);
    ui->stackedWidget->setCurrentIndex(0);

    srand(QDateTime::currentDateTime().toTime_t());

    //setting interactions with chart
    ui->chart->setInteractions(QCP::iRangeDrag | QCP::iRangeZoom | QCP::iSelectAxes | QCP::iSelectPlottables);

    //setting layout, here title size, style etc, and whether we use dot or comma
    ui->chart->plotLayout()->insertRow(0);
    QCPTextElement *title = new QCPTextElement(ui->chart, "Title of Plot", QFont("sans", 12, QFont::Bold));
    //add title to the chart
    ui->chart->plotLayout()->addElement(0, 0, title);
    ui->chart->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
    //hide legend
    ui->chart->legend->setVisible(false);

    //add graph 1
    ui->chart->addGraph(ui->chart->yAxis, ui->chart->xAxis);
    //set color for the curve
    ui->chart->graph(0)->setPen(QPen(QColor(255, 100, 0)));
    //set whether we want to connect the points
    ui->chart->graph(0)->setLineStyle(QCPGraph::lsLine);
    //set style of the dots
    ui->chart->graph(0)->setScatterStyle(QCPScatterStyle(QCPScatterStyle::ssCross, 20));
    //set name of the graph (optional)
    //ui->chart->graph(0)->setName("Humidity");

    //add graph 2
    ui->chart->addGraph(ui->chart->yAxis2,ui->chart->xAxis);
    //set color
    ui->chart->graph(1)->setPen(QPen(QColor(180,80,100)));
    //set line style
    ui->chart->graph(1)->setLineStyle(QCPGraph::lsLine);
    //set dot style
    ui->chart->graph(1)->setScatterStyle(QCPScatterStyle(QCPScatterStyle::ssCross, 20));
    //set name (optional)
    //ui->chart->graph(1)->setName("Temperature");

    //Define the QVector of data
    QVector<double> x0(25), y0(25);
    QVector<double> x1(15), y1(15);

    //iterate through points to get data for graph 1
    for (int i = 0; i < 25; ++i)
        {
            x0[i] = 3 * i / 25.0;
            y0[i] = qExp(-x0[i] * x0[i] * 0.8)*(x0[i] * x0[i] + x0[i]);
        }

    // and data for graph 2
    for (int i = 0; i < 15; ++i)
        {
            x1[i] = 3 * i / 15.0;;
            y1[i] = qExp(-x1[i] * x1[i])*(x1[i] * x1[i])*2.6;
        }

    //add data to the graph
    ui->chart->graph(0)->setData(x0, y0);
    ui->chart->graph(1)->setData(x1, y1);

    //For additional axes:
    //ui->chart->xAxis2->setVisible(true);
    //show axis 2
    ui->chart->yAxis2->setVisible(true);


    //set time for x axis
    QSharedPointer<QCPAxisTickerTime> timeTicker(new QCPAxisTickerTime);
    timeTicker->setTimeFormat("%h:%m:%s");
    ui->chart->xAxis->setTicker(timeTicker);

    //set labels for the axes
    ui->chart->xAxis->setLabel("Time");
    ui->chart->yAxis->setLabel("Humidity");
    ui->chart->yAxis2->setLabel("Temperature");

    //set tick length for x axis
    ui->chart->xAxis->setTickLength(0, 1);
    ui->chart->xAxis->setSubTickLength(0, 1);

    //set range for y axis
    ui->chart->yAxis->setRange(20,80);
    ui->chart->yAxis2->setRange(0,50);


    //Set time to current time
    static QTime time(QTime::currentTime());
    // calculate two new data points
    //double key = time.elapsed()/1000.0;
    //static double lastPointKey = 0;
    //add points in this interval
    //if (key-lastPointKey > 0.1) // at most add point every 0.1 s
    //{
      // add data to lines:
    //ui->chart->graph(0)->addData(key, qSin(key)+qrand()/(double)RAND_MAX*1*qSin(key/0.3843));
    //ui->chart->graph(1)->addData(key, qCos(key)+qrand()/(double)RAND_MAX*0.5*qSin(key/0.4364));
    //ui->chart->yAxis->rescale(true);
      // rescale value (vertical) axis to fit the current data:
    //ui->chart->graph(0)->rescaleValueAxis();
    //ui->chart->graph(1)->rescaleValueAxis(true);
    //lastPointKey = key;
   // }

    // make key axis range scroll with the data and replot the graph
    //ui->chart->xAxis->setRange(key, 0, Qt::AlignRight);
    //ui->chart->replot();

//******


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
