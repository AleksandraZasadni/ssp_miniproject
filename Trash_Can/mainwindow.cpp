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
//INITIAL SETUP

    ui->setupUi(this);
    ui->stackedWidget->setCurrentIndex(0);
    MainWindow::updateSettings();

    ui->mainScreenImageLabel->setScaledContents(true);
    ui->mainScreenImageLabel->setFixedSize(0,0);
    ui->ledGreen->setScaledContents(true);
    ui->ledGreen->setFixedSize(0,0);
    ui->ledYellow->setScaledContents(true);
    ui->ledYellow->setFixedSize(0,0);
    ui->ledRed->setScaledContents(true);
    ui->ledRed->setFixedSize(0,0);

    currentTemperature=49;
    currentHumidity=53.521521;
    currentFullness=64.521512512;

//TEMPERATURE GAUGE

    ui->temperatureGauge->addArc(55);
    ui->temperatureGauge->addDegrees(65)->setValueRange(TEMPERATUREMIN_DEFAULT,TEMPERATUREMAX_DEFAULT);
    ui->temperatureGauge->addValues(80)->setValueRange(TEMPERATUREMIN_DEFAULT,TEMPERATUREMAX_DEFAULT);
    ui->temperatureGauge->addLabel(70)->setText("°C");
    QcLabelItem *tempVal = ui->temperatureGauge->addLabel(40);
    temperatureNeedle = ui->temperatureGauge->addNeedle(60);
    temperatureNeedle->setLabel(tempVal);
    temperatureNeedle->setValueRange(TEMPERATUREMIN_DEFAULT,TEMPERATUREMAX_DEFAULT);
    ui->temperatureGauge->show();

//HUMIDITY GAUGE
    ui->humidiryGauge->addArc(55);
    ui->humidiryGauge->addDegrees(65)->setValueRange(HUMIDITYMIN_DEFAULT,HUMIDITYMAX_DEFAULT);
    ui->humidiryGauge->addValues(80)->setValueRange(HUMIDITYMIN_DEFAULT,HUMIDITYMAX_DEFAULT);
    ui->humidiryGauge->addLabel(70)->setText("%");
    QcLabelItem *humVal = ui->humidiryGauge->addLabel(40);
    humidityNeedle = ui->humidiryGauge->addNeedle(60);
    humidityNeedle->setLabel(humVal);
    humidityNeedle->setValueRange(HUMIDITYMIN_DEFAULT,HUMIDITYMAX_DEFAULT);
    ui->humidiryGauge->show();

//PLOTS

    srand(QDateTime::currentDateTime().toTime_t());

    QSharedPointer<QCPAxisTickerTime> timeTicker(new QCPAxisTickerTime);
    timeTicker->setTimeFormat("day %d\n%h:%m:%s");

    setProximityPlot();
    setFullnessPlot();
    setTemperaturePlot();
    setHumidityPlot();

    tThread.setProximityPlot(ui->proximityPlot);
    tThread.setFullnessPlot(ui->fullnessPlot);
    tThread.setTemperaturePlot(ui->temperaturePlot);
    tThread.setHumidityPlot(ui->humidityPlot);
    tThread.start();
}

MainWindow::~MainWindow()
{
    tThread.deactivate();
    delete ui;
}


void MainWindow::updateArduinoReadings(){
//    float/double temperature, humidity, fullness;

}

void MainWindow::setProximityPlot(){

    QSharedPointer<QCPAxisTickerTime> timeTicker(new QCPAxisTickerTime);
    timeTicker->setTimeFormat("day %d\n%h:%m:%s");

    ui->proximityPlot->setInteractions(QCP::iRangeDrag | QCP::iRangeZoom);
    ui->proximityPlot->axisRect()->setRangeDrag(Qt::Horizontal);
    ui->proximityPlot->axisRect()->setRangeZoom(Qt::Horizontal);
    ui->proximityPlot->plotLayout()->insertRow(0);
    QCPTextElement *title = new QCPTextElement(ui->proximityPlot, "", QFont("sans", 12, QFont::Bold));
    ui->proximityPlot->plotLayout()->addElement(0, 0, title);
    ui->proximityPlot->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
    ui->proximityPlot->legend->setVisible(false);

    ui->proximityPlot->addGraph(ui->proximityPlot->xAxis, ui->proximityPlot->yAxis);
    ui->proximityPlot->graph()->setPen(QPen(QColor(255, 100, 0)));
    ui->proximityPlot->graph()->setLineStyle(QCPGraph::lsLine);
    ui->proximityPlot->graph()->setScatterStyle(QCPScatterStyle(QCPScatterStyle::ssCross, 20));
    ui->proximityPlot->graph()->setName("Proximity Opening");
    ui->proximityPlot->xAxis->setTicker(timeTicker);

    ui->proximityPlot->xAxis->setLabel("Time");
    ui->proximityPlot->yAxis->setLabel("Proximity Opening");
    ui->proximityPlot->xAxis->setTickLength(0, 1);
    ui->proximityPlot->xAxis->setSubTickLength(0, 1);


    ui->proximityPlot->yAxis->setRange(0,100);


}

void MainWindow::setFullnessPlot(){

    QSharedPointer<QCPAxisTickerTime> timeTicker(new QCPAxisTickerTime);
    timeTicker->setTimeFormat("day %d\n%h:%m:%s");

    ui->fullnessPlot->setInteractions(QCP::iRangeDrag);
    ui->fullnessPlot->axisRect()->setRangeDrag(Qt::Horizontal);
    ui->fullnessPlot->plotLayout()->insertRow(0);
    QCPTextElement *title_2 = new QCPTextElement(ui->fullnessPlot, "", QFont("sans", 12, QFont::Bold));
    ui->fullnessPlot->plotLayout()->addElement(0, 0, title_2);
    ui->fullnessPlot->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
    ui->fullnessPlot->legend->setVisible(false);

    ui->fullnessPlot->addGraph(ui->fullnessPlot->xAxis, ui->fullnessPlot->yAxis);
    ui->fullnessPlot->graph()->setPen(QPen(QColor(255, 100, 0)));
    ui->fullnessPlot->graph()->setLineStyle(QCPGraph::lsLine);
    ui->fullnessPlot->graph()->setScatterStyle(QCPScatterStyle(QCPScatterStyle::ssCross, 20));
    ui->fullnessPlot->graph()->setName("Fullness");

    ui->fullnessPlot->xAxis->setTicker(timeTicker);

    ui->fullnessPlot->xAxis->setLabel("Time");
    ui->fullnessPlot->yAxis->setLabel("Fullness");

    ui->fullnessPlot->xAxis->setTickLength(0, 1);
    ui->fullnessPlot->xAxis->setSubTickLength(0, 1);

    ui->fullnessPlot->yAxis->setRange(0,100);
}


void MainWindow::setTemperaturePlot(){

    QSharedPointer<QCPAxisTickerTime> timeTicker(new QCPAxisTickerTime);
    timeTicker->setTimeFormat("day %d\n%h:%m:%s");

    ui->temperaturePlot->setInteractions(QCP::iRangeDrag);
    ui->temperaturePlot->axisRect()->setRangeDrag(Qt::Horizontal);
    ui->temperaturePlot->plotLayout()->insertRow(0);
    QCPTextElement *title_3 = new QCPTextElement(ui->temperaturePlot, "", QFont("sans", 12, QFont::Bold));
    ui->temperaturePlot->plotLayout()->addElement(0, 0, title_3);
    ui->temperaturePlot->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
    ui->temperaturePlot->legend->setVisible(false);

    ui->temperaturePlot->addGraph(ui->temperaturePlot->xAxis, ui->temperaturePlot->yAxis);
    ui->temperaturePlot->graph()->setPen(QPen(QColor(255, 100, 0)));
    ui->temperaturePlot->graph()->setLineStyle(QCPGraph::lsLine);
    ui->temperaturePlot->graph()->setScatterStyle(QCPScatterStyle(QCPScatterStyle::ssCross, 20));

    ui->temperaturePlot->xAxis->setTicker(timeTicker);

    ui->temperaturePlot->xAxis->setLabel("Time");
    ui->temperaturePlot->yAxis->setLabel("Temperature");

    ui->temperaturePlot->xAxis->setTickLength(0, 1);
    ui->temperaturePlot->xAxis->setSubTickLength(0, 1);

    ui->temperaturePlot->yAxis->setRange(0,50);


}

void MainWindow::setHumidityPlot(){
    QSharedPointer<QCPAxisTickerTime> timeTicker(new QCPAxisTickerTime);
    timeTicker->setTimeFormat("day %d\n%h:%m:%s");


    ui->humidityPlot->setInteractions(QCP::iRangeDrag);
    ui->humidityPlot->axisRect()->setRangeDrag(Qt::Horizontal);
    ui->humidityPlot->plotLayout()->insertRow(0);
    QCPTextElement *title_4 = new QCPTextElement(ui->humidityPlot, "", QFont("sans", 12, QFont::Bold));
    ui->humidityPlot->plotLayout()->addElement(0, 0, title_4);
    ui->humidityPlot->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
    ui->humidityPlot->legend->setVisible(false);
    ui->humidityPlot->addGraph(ui->humidityPlot->xAxis, ui->humidityPlot->yAxis);
    ui->humidityPlot->graph()->setPen(QPen(QColor(255, 100, 0)));
    ui->humidityPlot->graph()->setLineStyle(QCPGraph::lsLine);
    ui->humidityPlot->graph()->setScatterStyle(QCPScatterStyle(QCPScatterStyle::ssCross, 20));
     //ui->temperaturePlot->graph(0)->setName("Temperature");
    ui->humidityPlot->xAxis->setTicker(timeTicker);
    ui->humidityPlot->xAxis->setLabel("Time");
    ui->humidityPlot->yAxis->setLabel("Humidity");
    ui->humidityPlot->xAxis->setTickLength(0, 1);
    ui->humidityPlot->xAxis->setSubTickLength(0, 1);
    ui->humidityPlot->yAxis->setRange(20,80);
}


void MainWindow::resetProximityPlot(){


}


void MainWindow::resizeEvent(QResizeEvent *event)
{
    QMainWindow::resizeEvent(event);
    MainWindow::resizeImagesKeepingAspectRatio(ui->mainScrennImageWidget, ui->mainScreenImageLabel);
    MainWindow::resizeImagesKeepingAspectRatio(ui->ledGreenWidget, ui->ledGreen,0.9);
    MainWindow::resizeImagesKeepingAspectRatio(ui->ledYellowWidget, ui->ledYellow,0.9);
    MainWindow::resizeImagesKeepingAspectRatio(ui->ledRedWidget, ui->ledRed,0.9);
}

void MainWindow::resizeImagesKeepingAspectRatio(QWidget *widget, QLabel *label){
    QSize pixSize = label->pixmap()->size();
    pixSize.scale(widget->size(), Qt::KeepAspectRatio);
    label->setFixedSize(pixSize);
}

void MainWindow::resizeImagesKeepingAspectRatio(QWidget *widget, QLabel *label, double scale){
    QSize pixSize = label->pixmap()->size();
    pixSize.scale(scale*widget->size(), Qt::KeepAspectRatio);
    label->setFixedSize(pixSize);
}


//TO be done by the Arduino Communication
void MainWindow::SerialDataArrive(QString sPortsName)
{

}


/*void MainWindow::resetFullnessPlot(){

}*/

//**********************GUI**********************//
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

void MainWindow::updateSettings(){
    ui->languageComboBox->setCurrentIndex(tSetting.language);
    ui->proximityOpeningCheckBox->setChecked(tSetting.isProximityEnabled);
    ui->openingSpeedScrollBar->setValue(tSetting.openingSpeed);
    ui->detectionRangeScrollBar->setValue(tSetting.detectionRange);
    ui->temperatureMarginMinimumEdit->setText(QString::number(tSetting.temperatureMin));
    ui->temperatureMarginMaximumEdit->setText(QString::number(tSetting.temperatureMax));
    ui->humidityMarginMinimumEdit->setText(QString::number(tSetting.humidityMin));
    ui->humidityMarginMaximumEdit->setText(QString::number(tSetting.humidityMax));
    if (tSetting.isLockEnabled == 1){
     ui->lock->setText("UNLOCKED");
     ui->lock->setChecked(true);
    }
    else{
     ui->lock->setText("LOCK");
     ui->lock->setChecked(false);
    }
}

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
        if(tSetting.isSettingsOutOfBoundaries){
            QMessageBox::critical(this,"NOT APPLIED!!!","Invalid values, settings not applied!");
            tSetting.isSettingsOutOfBoundaries = false;
        }else{
            MainWindow::updateStatus();
        }
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

void MainWindow::on_lock_clicked(bool checked)
{
    trashConnect.serialConnection::changeLED(checked);
    trashConnect.serialConnection::resample();
    trashConnect.serialConnection::setDefaultVal();
    checked ? ui->lock->setText("UNLOCK"): ui->lock->setText("LOCK");
    tSetting.isLockEnabled = checked;
}

void MainWindow::on_humidityResetButton_clicked()
{

    ui->humidityPlot->xAxis->rescale(false);
}

void MainWindow::on_temperatureResetButton_clicked()
{
    ui->temperaturePlot->xAxis->rescale(false);
}

void MainWindow::on_secretPushButton_clicked()
{
    ui->secretPushButton->setText("SECRET REVEALED!");
    ui->secretPushButton->setEnabled(false);
/**********************************************************/
    MainWindow::updateTemperature();
    MainWindow::updateHumidity();
    MainWindow::updateFullness();
    MainWindow::updateStatus();
/**********************************************************/
}

void MainWindow::updateTemperature(){
    ui->statusTemperatureNumber->setText(QString::number(currentTemperature,'f', 2));
    ui->temperatureNumberLabel->setText(QString::number(currentTemperature,'f', 2));
    temperatureNeedle->setCurrentValue(currentTemperature);
}

void MainWindow::updateHumidity(){
    ui->statusHumidityNumber->setText(QString::number(currentHumidity,'f', 2));
    ui->humidityNumberLabel->setText(QString::number(currentHumidity,'f', 2));
    humidityNeedle->setCurrentValue(currentHumidity);
}

void MainWindow::updateFullness(){
    ui->statusFullnessProgressBar->setValue(currentFullness);
    ui->fullnessBar->setValue(currentFullness);
    ui->fullnessEstimationNumber->setText(QString::number(currentFullness,'f', 2));
}


void MainWindow::updateStatus(){
    if(currentTemperature>(3*tSetting.temperatureMin+tSetting.temperatureMax)/4 && currentTemperature<(3*tSetting.temperatureMax+tSetting.temperatureMin)/4 &&
       currentHumidity>(3*tSetting.humidityMin+tSetting.humidityMax)/4 && currentHumidity<(3*tSetting.humidityMax+tSetting.humidityMin)/4 &&
       currentFullness<FULLNESSYELLOW){
        ui->ledGreen->setEnabled(true);
        ui->ledYellow->setEnabled(false);
        ui->ledRed->setEnabled(false);
        ui->statusLabel->setText("GOOD");
    }else
    if(currentTemperature<tSetting.temperatureMin || currentTemperature>tSetting.temperatureMax ||
       currentHumidity<tSetting.humidityMin || currentHumidity>tSetting.humidityMax ||
       currentFullness>FULLNESSRED){
        ui->ledGreen->setEnabled(false);
        ui->ledYellow->setEnabled(false);
        ui->ledRed->setEnabled(true);
        ui->statusLabel->setText("UNACCEPTABLE");
    }else{
        ui->ledGreen->setEnabled(false);
        ui->ledYellow->setEnabled(true);
        ui->ledRed->setEnabled(false);
        ui->statusLabel->setText("ACCEPTABLE");
    }
}
