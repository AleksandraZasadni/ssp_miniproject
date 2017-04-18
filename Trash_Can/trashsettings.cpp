#include "trashsettings.h"
#include "ui_mainwindow.h"
#include "mainwindow.h"
#include "confirmdialog.h"
#include "ui_confirmdialog.h"
#include <QDebug>

trashSettings::trashSettings(){
    QFile settingsFileRead(PATHTOSETTINGSFILE);
    if(!settingsFileRead.open(QFile::ReadOnly | QFile::Text)){
        settingsFileRead.close();
        trashSettings::setDefault();
        return;
    }
    initFileString = settingsFileRead.readAll();
    settingsFileRead.close();

    initFileList = initFileString.split('\n');
    if (initFileList.size() == 9){
        language = initFileList[0].toInt();
        isProximityEnabled = initFileList[1].toInt();
        openingSpeed = initFileList[2].toInt();
        detectionRange = initFileList[3].toInt();
        temperatureMin = initFileList[4].toInt();
        temperatureMax = initFileList[5].toInt();
        humidityMin = initFileList[6].toInt();
        humidityMax = initFileList[7].toInt();
        if(trashSettings::checkBoundaries()){
            trashSettings::setDefault();
          }
    }else{
        trashSettings::setDefault();
    }
}

bool trashSettings::checkBoundaries(){
    if(language<LANGUAGE_LOWER_BOUNDARY || language>LANGUAGE_UPPER_BOUNDARY ||
       isProximityEnabled<ISPROXIMITYENABLED_LOWER_BOUNDARY || isProximityEnabled>ISPROXIMITYENABLED_UPPER_BOUNDARY ||
       openingSpeed<OPENINGSPEED_LOWER_BOUNDARY || openingSpeed>OPENINGSPEED_UPPER_BOUNDARY ||
       detectionRange<DETECTIONRANGE_LOWER_BOUNDARY || detectionRange>DETECTIONRANGE_UPPER_BOUNDARY ||
       temperatureMin<TEMPERATUREMIN_LOWER_BOUNDARY || temperatureMin>TEMPERATUREMIN_UPPER_BOUNDARY ||
       temperatureMax<TEMPERATUREMAX_LOWER_BOUNDARY || temperatureMax>TEMPERATUREMAX_UPPER_BOUNDARY ||
       humidityMin<HUMIDITYMIN_LOWER_BOUNDARY || humidityMin>HUMIDITYMIN_UPPER_BOUNDARY ||
       humidityMax<HUMIDITYMAX_LOWER_BOUNDARY || humidityMax>HUMIDITYMAX_UPPER_BOUNDARY ||
       temperatureMin>=temperatureMax || humidityMin>=humidityMax){
       return true;
    }else {return false;}
}


void trashSettings::apply(){
    if(!trashSettings::checkBoundaries()){
        QFile applySettingsChangeFile(PATHTOSETTINGSFILE);
        if(!applySettingsChangeFile.open(QFile::WriteOnly | QFile::Text)){
            trashSettings::setDefault();
            return;
        }
        initFileList.clear();
        initFileList.append(QString::number(language));
        initFileList.append(QString::number(isProximityEnabled));
        initFileList.append(QString::number(openingSpeed));
        initFileList.append(QString::number(detectionRange));
        initFileList.append(QString::number(temperatureMin));
        initFileList.append(QString::number(temperatureMax));
        initFileList.append(QString::number(humidityMin));
        initFileList.append(QString::number(humidityMax));

        initFileChanged.clear();
        for(int i=0; i<initFileList.size(); i++){
            initFileChanged.append(initFileList[i]);
            initFileChanged.append("\n");
        }

        applySettingsChangeFile.write(initFileChanged);
        applySettingsChangeFile.flush();
        applySettingsChangeFile.close();
    }else{
        confirmDialog outOfBoundariesSettingsDialog;
        outOfBoundariesSettingsDialog.ui->title->setText("NOT APPLIED!!!");
        outOfBoundariesSettingsDialog.ui->regularText->setText("Values are out of boundaries!");
        outOfBoundariesSettingsDialog.ui->buttonBox->addButton(QDialogButtonBox::Close);
        outOfBoundariesSettingsDialog.exec();
        if (outOfBoundariesSettingsDialog.isAccepted){
            outOfBoundariesSettingsDialog.isAccepted=false;
            isSettingsOutOfBoundaries = true;
        }
    }
}

void trashSettings::setDefault(){
    initFileList.clear();
    initFileList.append(QString::number(LANGUAGE_DEFAULT));
    initFileList.append(QString::number(ISPROXIMITYENABLED_DEFAULT));
    initFileList.append(QString::number(OPENINGSPEED_DEFAULT));
    initFileList.append(QString::number(DETECTIONRANGE_DEFAULT));
    initFileList.append(QString::number(TEMPERATUREMIN_DEFAULT));
    initFileList.append(QString::number(TEMPERATUREMAX_DEFAULT));
    initFileList.append(QString::number(HUMIDITYMIN_DEFAULT));
    initFileList.append(QString::number(HUMIDITYMAX_DEFAULT));
    language = LANGUAGE_DEFAULT;
    isProximityEnabled = ISPROXIMITYENABLED_DEFAULT;
    openingSpeed = OPENINGSPEED_DEFAULT;
    detectionRange = DETECTIONRANGE_DEFAULT;
    temperatureMin = TEMPERATUREMIN_DEFAULT;
    temperatureMax = TEMPERATUREMAX_DEFAULT;
    humidityMin = HUMIDITYMIN_DEFAULT;
    humidityMax = HUMIDITYMAX_DEFAULT;

    QFile::remove(PATHTOSETTINGSFILE);
    QFile settingsFileDefaultCreate(PATHTOSETTINGSFILE);
    if(!settingsFileDefaultCreate.open(QFile::WriteOnly | QFile::Text)){
        return;
    }

    initFileChanged.clear();
    for(int i=0; i<initFileList.size(); i++){
        initFileChanged.append(initFileList[i]);
        initFileChanged.append("\n");
    }

    settingsFileDefaultCreate.write(initFileChanged);
    settingsFileDefaultCreate.flush();
    settingsFileDefaultCreate.close();
}
