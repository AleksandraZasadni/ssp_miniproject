#ifndef SETTINGS_H
#define SETTINGS_H

#define PATHTOSETTINGSFILE "./settings.txt"
#define LANGUAGE_DEFAULT 0
#define ISPROXIMITYENABLED_DEFAULT 1
#define OPENINGSPEED_DEFAULT 50
#define DETECTIONRANGE_DEFAULT 50
#define TEMPERATUREMIN_DEFAULT 10 //change to 0
#define TEMPERATUREMAX_DEFAULT 30 //change to 50
#define HUMIDITYMIN_DEFAULT 0 //change to 20
#define HUMIDITYMAX_DEFAULT 40 //change to 80
#define ISLOCKENABLED_DEFAULT 0

#define LANGUAGE_LOWER_BOUNDARY 0
#define LANGUAGE_UPPER_BOUNDARY 0
#define ISPROXIMITYENABLED_LOWER_BOUNDARY 0
#define ISPROXIMITYENABLED_UPPER_BOUNDARY 1
#define OPENINGSPEED_LOWER_BOUNDARY 0
#define OPENINGSPEED_UPPER_BOUNDARY 100
#define DETECTIONRANGE_LOWER_BOUNDARY 0
#define DETECTIONRANGE_UPPER_BOUNDARY 100
#define TEMPERATUREMIN_LOWER_BOUNDARY 0
#define TEMPERATUREMIN_UPPER_BOUNDARY 100 //change to 50
#define TEMPERATUREMAX_LOWER_BOUNDARY 0
#define TEMPERATUREMAX_UPPER_BOUNDARY 100 //change to 50
#define HUMIDITYMIN_LOWER_BOUNDARY 0 //change to 20
#define HUMIDITYMIN_UPPER_BOUNDARY 100 //change to 80
#define HUMIDITYMAX_LOWER_BOUNDARY 0 //change to 20
#define HUMIDITYMAX_UPPER_BOUNDARY 100 //change to 80
#define ISLOCKENABLED_LOWER_BOUNDARY 0
#define ISLOCKENABLED_UPPER_BOUNDARY 1
#define FULLNESSRED 70
#define FULLNESSYELLOW 90

#define GRAPHCROSSSIZE 10


#include <QFile>
#include <serialconnection.h>

class trashSettings
{
public:
    trashSettings();
    void apply();
    void setDefault();
    serialConnection *trashConnect;

    void setTrashConnect(serialConnection *trash);

    int language, isProximityEnabled, openingSpeed, detectionRange,
    temperatureMin, temperatureMax, humidityMin, humidityMax, isLockEnabled;
    bool isSettingsOutOfBoundaries;

private:
    QByteArray initFileChanged;
    QStringList initFileList;
    QString initFileString;

    bool checkBoundaries();

};

#endif // SETTINGS_H
