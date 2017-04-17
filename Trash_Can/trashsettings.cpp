#include "trashsettings.h"

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
    }else{
        trashSettings::setDefault();
    }
//TO DO: add condition checking whether numbers we got from the file are within boundaries
}


void trashSettings::apply(){
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



// REWRITE ONE LINE IN TEXT FILE
//        QFile initFile(PATHTOSETTINGSFILE);
//        if(!initFile.open(QFile::ReadWrite | QFile::Text)){
//            qDebug() << "File not opened";
//            return;
//        }
//        QTextStream initFileTextStream(&initFile);
//        QString initFileString = initFileTextStream.readAll();
//        QStringList initFileList = initFileString.split('\n');

//        insertInLine = 1;
//        initFileList[insertInLine] = "WHAAAAAAAAAAAT?";
//        initFileChanged.clear();

//        for(int i=0; i<insertInLine; i++){
//        initFileChanged.append(initFileList[i]);
//        initFileChanged.append("\n");
//        }

//        initFileChanged.append(initFileList[insertInLine]);
//        initFileChanged.append("\n");

//        for(int i=insertInLine+1; i<initFileList.size()-1 ; i++){
//        initFileChanged.append(initFileList[i]);
//        initFileChanged.append("\n");
//        }

//        initFile.seek(0);
//        initFile.write(initFileChanged);
//        initFile.flush();
//        initFile.close();
//        }
