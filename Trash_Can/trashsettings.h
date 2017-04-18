#ifndef SETTINGS_H
#define SETTINGS_H

#include <QFile>
#include <QString>
#include <QByteArray>
#include <QStringList>


#define PATHTOSETTINGSFILE "./settings.txt"
//DEFAULT SETTINGS
#define LANGUAGE_DEFAULT 0
#define ISPROXIMITYENABLED_DEFAULT 1
#define OPENINGSPEED_DEFAULT 50
#define DETECTIONRANGE_DEFAULT 50
#define TEMPERATUREMIN_DEFAULT 0
#define TEMPERATUREMAX_DEFAULT 50
#define HUMIDITYMIN_DEFAULT 20
#define HUMIDITYMAX_DEFAULT 80

#define LANGUAGE_LOWER_BOUNDARY 0
#define LANGUAGE_UPPER_BOUNDARY 1
#define ISPROXIMITYENABLED_LOWER_BOUNDARY 0
#define ISPROXIMITYENABLED_UPPER_BOUNDARY 1
#define OPENINGSPEED_LOWER_BOUNDARY 0
#define OPENINGSPEED_UPPER_BOUNDARY 100
#define DETECTIONRANGE_LOWER_BOUNDARY 0
#define DETECTIONRANGE_UPPER_BOUNDARY 100
#define TEMPERATUREMIN_LOWER_BOUNDARY 0
#define TEMPERATUREMIN_UPPER_BOUNDARY 50
#define TEMPERATUREMAX_LOWER_BOUNDARY 0
#define TEMPERATUREMAX_UPPER_BOUNDARY 50
#define HUMIDITYMIN_LOWER_BOUNDARY 20
#define HUMIDITYMIN_UPPER_BOUNDARY 80
#define HUMIDITYMAX_LOWER_BOUNDARY 20
#define HUMIDITYMAX_UPPER_BOUNDARY 80




class trashSettings
{
public:
    trashSettings();
    void apply();
    void setDefault();

    int language, isProximityEnabled, openingSpeed, detectionRange,
    temperatureMin, temperatureMax, humidityMin, humidityMax;
    bool isSettingsOutOfBoundaries;

private:
    QByteArray initFileChanged;
    QStringList initFileList;
    QString initFileString;

    bool checkBoundaries();

};

#endif // SETTINGS_H
