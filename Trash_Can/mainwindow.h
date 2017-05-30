#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QtCore>
#include <QApplication>
#include <QtWidgets/QApplication>
#include <QMainWindow>
#include <QtCore/QDateTime>
#include <QtCore/QCoreApplication>
#include <QInputDialog>
#include <QString>
#include <QTextStream>
#include <QTimer>
#include <QLabel>
#include <QByteArray>
#include <QPixmap>
#include <tuple>
#include "ui_mainwindow.h"
#include "ui_confirmdialog.h"
#include "timethread.h"
#include "trashsettings.h"
#include "serialconnection.h"
#include "confirmdialog.h"
#include "qcgaugewidget.h"
#include "qcustomplot.h"


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    Ui::MainWindow *ui;
    ~MainWindow();
    trashSettings tSetting;
    serialConnection *trashConnect;
    double currentTemperature, currentHumidity, currentFullness;
    std::tuple<double *, double *, double *> currentTup = std::make_tuple(&currentFullness, &currentTemperature, &currentHumidity);


    void updateSettings();
signals:

    void lockTrash(bool lock);


public slots:
    void on_lock_clicked(bool checked);
    void messurmentRecived(double full, double temp, double hum, double time);

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

    void on_settingsApplyButton_clicked();

    void on_settingsDefaultButton_clicked();

//    void on_proximityOpeningCheckBox_toggled(bool checked);

    void on_languageComboBox_currentIndexChanged(int index);

//    void on_openingSpeedScrollBar_sliderMoved(int position);

//    void on_detectionRangeScrollBar_sliderMoved(int position);

    void on_temperatureMarginMinimumEdit_editingFinished();

    void on_temperatureMarginMaximumEdit_editingFinished();

    void on_humidityMarginMinimumEdit_editingFinished();

    void on_humidityMarginMaximumEdit_editingFinished();

    void on_humidityResetButton_clicked();

    void on_temperatureResetButton_clicked();

    void on_secretPushButton_clicked();

private:
    TimeThread tThread;
    bool isReturnToStatus = false;

    void returnToStatus(); //Return buttons in Fullness, Temperature and Humidity return to Status is accessed from there

    void setFullnessPlot();
    void setTemperaturePlot();
    void setHumidityPlot();

    QcNeedleItem *temperatureNeedle;
    QcNeedleItem *humidityNeedle;

    void resizeEvent(QResizeEvent *event);
    void resizeImagesKeepingAspectRatio(QWidget *widget, QLabel *label);
    void resizeImagesKeepingAspectRatio(QWidget *widget, QLabel *label, double scale);

    void updateTemperature();
    void updateHumidity();
    void updateFullness();
    void updateStatus();


};

#endif // MAINWINDOW_H
