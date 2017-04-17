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

class trashSettings
{
public:
    trashSettings();
    void apply();
    void setDefault();

    int language, isProximityEnabled, openingSpeed, detectionRange,
    temperatureMin, temperatureMax, humidityMin, humidityMax;

private:
    QByteArray initFileChanged;
    QStringList initFileList;
    QString initFileString;

};

#endif // SETTINGS_H
