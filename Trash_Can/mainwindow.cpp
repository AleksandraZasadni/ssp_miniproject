#include <QApplication>
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "ui_confirmdialog.h"
#include <QtWidgets/QApplication>
#include "confirmdialog.h"



MainWindow::MainWindow(QWidget *parent) :
    ui(new Ui::MainWindow),
    QMainWindow(parent), tThread()
{
    ui->setupUi(this);
//GO TO MAIN MENU
    ui->stackedWidget->setCurrentIndex(0);
    MainWindow::updateSettings();


//TEMPERATURE GAUGE
    ui->temperatureGauge->addArc(55);
    ui->temperatureGauge->addDegrees(65)->setValueRange(tSetting.temperatureMin,tSetting.temperatureMax);
    ui->temperatureGauge->addValues(80)->setValueRange(tSetting.temperatureMin,tSetting.temperatureMax);
    ui->temperatureGauge->addLabel(70)->setText("°C");
    QcLabelItem *tempVal = ui->temperatureGauge->addLabel(40);
    temperatureNeedle = ui->temperatureGauge->addNeedle(60);
    temperatureNeedle->setLabel(tempVal);
    temperatureNeedle->setValueRange(tSetting.temperatureMin,tSetting.temperatureMax);
    ui->temperatureGauge->show();
/////////////////////////////////////////////////////////////////////////////////////
    temperatureNeedle->setCurrentValue(0);
/////////////////////////////////////////////////////////////////////////////////////

//Humidity GAUGE
    ui->humidiryGauge->addArc(55);
    ui->humidiryGauge->addDegrees(65)->setValueRange(tSetting.humidityMin,tSetting.humidityMax);
    ui->humidiryGauge->addValues(80)->setValueRange(tSetting.humidityMin,tSetting.humidityMax);
    ui->humidiryGauge->addLabel(70)->setText("%");
    QcLabelItem *humVal = ui->humidiryGauge->addLabel(40);
    humidityNeedle = ui->humidiryGauge->addNeedle(60);
    humidityNeedle->setLabel(humVal);
    humidityNeedle->setValueRange(tSetting.humidityMin,tSetting.humidityMax);
    ui->humidiryGauge->show();
/////////////////////////////////////////////////////////////////////////////////////
    humidityNeedle->setCurrentValue(0);
/////////////////////////////////////////////////////////////////////////////////////


//PLOTS

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


void MainWindow::updateSettings(){
    ui->languageComboBox->setCurrentIndex(tSetting.language);
    ui->proximityOpeningCheckBox->setChecked(tSetting.isProximityEnabled);
    ui->openingSpeedScrollBar->setValue(tSetting.openingSpeed);
    ui->detectionRangeScrollBar->setValue(tSetting.detectionRange);
    ui->temperatureMarginMinimumEdit->setText(QString::number(tSetting.temperatureMin));
    ui->temperatureMarginMaximumEdit->setText(QString::number(tSetting.temperatureMax));
    ui->humidityMarginMinimumEdit->setText(QString::number(tSetting.humidityMin));
    ui->humidityMarginMaximumEdit->setText(QString::number(tSetting.humidityMax));
}



//TO be done by the Arduino Communication
void MainWindow::SerialDataArrive(QString sPortsName)
{

}

//GUI//
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
    if (isReturnToStatus){
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

//SETTINGS

void MainWindow::on_settingsApplyButton_clicked()
{
    confirmDialog applySettingsDialog;
    applySettingsDialog.ui->title->setText("Are you sure?");
    applySettingsDialog.ui->regularText->setText("Do you really want to apply these settings?");
    applySettingsDialog.ui->buttonBox->addButton(QDialogButtonBox::Ok);
    applySettingsDialog.ui->buttonBox->addButton(QDialogButtonBox::Cancel);
    applySettingsDialog.exec();
    if (applySettingsDialog.isAccepted){
        applySettingsDialog.isAccepted=false;
        tSetting.apply();
    }
}

void MainWindow::on_settingsDefaultButton_clicked()
{
    tSetting.setDefault();
    MainWindow::updateSettings();
}

void MainWindow::on_languageComboBox_currentIndexChanged(int index)
{
    tSetting.language = index;
}

void MainWindow::on_proximityOpeningCheckBox_toggled(bool checked)
{
    checked ? ui->proximityOpeningCheckBox->setText("Enabled") :
              ui->proximityOpeningCheckBox->setText("Disabled");
    ui->openingSpeedLabel->setEnabled(checked);
    ui->detectionRangeLabel->setEnabled(checked);
    ui->openingSpeedScrollBar->setEnabled(checked);
    ui->detectionRangeScrollBar->setEnabled(checked);
    tSetting.isProximityEnabled = checked;
}

void MainWindow::on_openingSpeedScrollBar_sliderMoved(int position)
{
    tSetting.openingSpeed = position;
}

void MainWindow::on_detectionRangeScrollBar_sliderMoved(int position)
{
    tSetting.detectionRange = position;
}

void MainWindow::on_temperatureMarginMinimumEdit_editingFinished()
{
    tSetting.temperatureMin = (ui->temperatureMarginMinimumEdit->text()).toInt();
}

void MainWindow::on_temperatureMarginMaximumEdit_editingFinished()
{
    tSetting.temperatureMax = (ui->temperatureMarginMaximumEdit->text()).toInt();
}

void MainWindow::on_humidityMarginMinimumEdit_editingFinished()
{
    tSetting.humidityMin = (ui->humidityMarginMinimumEdit->text()).toInt();
}

void MainWindow::on_humidityMarginMaximumEdit_editingFinished()
{
    tSetting.humidityMax = (ui->humidityMarginMaximumEdit->text()).toInt();
}
