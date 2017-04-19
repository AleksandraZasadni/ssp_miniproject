/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollBar>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <qcgaugewidget.h>
#include "clickablewidget.h"
#include "myplot.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_7;
    QStackedWidget *stackedWidget;
    QWidget *mainScreen;
    QHBoxLayout *horizontalLayout;
    QLabel *mainScreenImageLabel;
    QSpacerItem *horizontalSpacer_9;
    QFrame *line_5;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButtonStatus;
    QSpacerItem *verticalSpacer;
    QPushButton *pushButtonFullness;
    QPushButton *pushButtonTemperature;
    QPushButton *pushButtonHumidity;
    QSpacerItem *buttonsVerticalSpacer;
    QPushButton *pushButtonSettings;
    QPushButton *pushButtonHelp;
    QSpacerItem *verticalSpacer_10;
    QPushButton *pushButtonExit;
    QWidget *status;
    QVBoxLayout *verticalLayout_4;
    QLabel *statusLabel_2;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_19;
    clickableWidget *statusFullness;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_5;
    QProgressBar *statusFullnessProgressBar;
    QFrame *line_12;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_14;
    QLabel *ledGreen;
    QSpacerItem *horizontalSpacer_13;
    QLabel *ledYellow;
    QSpacerItem *horizontalSpacer_14;
    QLabel *ledRed;
    QSpacerItem *horizontalSpacer_12;
    QLabel *label_6;
    QLabel *label_8;
    QSpacerItem *horizontalSpacer_11;
    QFrame *line_13;
    QHBoxLayout *horizontalLayout_17;
    clickableWidget *statusTemperature;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QHBoxLayout *horizontalLayout_13;
    QSpacerItem *horizontalSpacer_17;
    QLabel *statusTemperatureNumber;
    QLabel *celsiusLabel_4;
    QSpacerItem *horizontalSpacer_18;
    QFrame *line_14;
    clickableWidget *statusHumidity;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout_18;
    QSpacerItem *horizontalSpacer_19;
    QLabel *statusHumidityNumber;
    QLabel *percentageLabel_1;
    QSpacerItem *horizontalSpacer_20;
    QFrame *line_15;
    QPushButton *pushButtonReturn_1;
    QWidget *fullness;
    QVBoxLayout *verticalLayout_21;
    QLabel *fullnessLabel;
    QSpacerItem *verticalSpacer_4;
    QProgressBar *fullnessBar_1;
    QSpacerItem *verticalSpacer_3;
    QFrame *line_3;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_8;
    QLabel *FullnessEstimationLabel_2;
    MyPlot *proximityPlot;
    QFrame *line_2;
    QVBoxLayout *verticalLayout_9;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer_2;
    QLabel *FullnessEstimationLabel;
    QLabel *fullnessEstimationNumber;
    QLabel *fullnessEstimationUnit;
    QSpacerItem *horizontalSpacer_3;
    MyPlot *fullnessPlot;
    QFrame *line_8;
    QPushButton *pushButtonReturn_2;
    QWidget *temperature;
    QVBoxLayout *verticalLayout_12;
    QLabel *temperatureLabel;
    QSpacerItem *verticalSpacer_11;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout_11;
    MyPlot *temperaturePlot;
    QPushButton *temperatureResetButton;
    QFrame *line_6;
    QVBoxLayout *verticalLayout_10;
    QHBoxLayout *horizontalLayout_7;
    QSpacerItem *horizontalSpacer_6;
    QLabel *label_3;
    QLabel *celsiusLabel_2;
    QSpacerItem *horizontalSpacer_7;
    QcGaugeWidget *temperatureGauge;
    QFrame *line_4;
    QPushButton *pushButtonReturn_3;
    QWidget *humidity;
    QVBoxLayout *verticalLayout_15;
    QLabel *temperatureLabel_2;
    QSpacerItem *verticalSpacer_12;
    QHBoxLayout *horizontalLayout_5;
    QVBoxLayout *verticalLayout_13;
    MyPlot *humidityPlot;
    QPushButton *humidityResetButton;
    QFrame *line_9;
    QVBoxLayout *verticalLayout_14;
    QHBoxLayout *horizontalLayout_8;
    QSpacerItem *horizontalSpacer_8;
    QLabel *label_4;
    QLabel *celsiusLabel_5;
    QSpacerItem *horizontalSpacer_10;
    QcGaugeWidget *humidiryGauge;
    QFrame *line_7;
    QPushButton *pushButtonReturn_4;
    QWidget *settings;
    QVBoxLayout *verticalLayout_17;
    QLabel *settingsLabel;
    QSpacerItem *verticalSpacer_8;
    QHBoxLayout *horizontalLayout_9;
    QVBoxLayout *verticalLayout_16;
    QGridLayout *gridLayout_2;
    QLabel *detectionRangeLabel;
    QLabel *languageLabel;
    QCheckBox *proximityOpeningCheckBox;
    QSpacerItem *verticalSpacer_5;
    QComboBox *languageComboBox;
    QScrollBar *openingSpeedScrollBar;
    QScrollBar *detectionRangeScrollBar;
    QLabel *openingSpeedLabel;
    QLabel *proximityOpeningLabel;
    QFrame *line_18;
    QSpacerItem *verticalSpacer_15;
    QSpacerItem *verticalSpacer_6;
    QFrame *line_16;
    QSpacerItem *verticalSpacer_7;
    QGridLayout *gridLayout;
    QLabel *celsiusLabel_3;
    QLabel *settingsDashLabel_1;
    QLineEdit *humidityMarginMaximumEdit;
    QLabel *settingsTemperatureLabel;
    QLineEdit *temperatureMarginMinimumEdit;
    QLabel *settingsMinimumLabel;
    QLineEdit *humidityMarginMinimumEdit;
    QLabel *settingsHumidityLabel;
    QLabel *settingsDashLabel_2;
    QLabel *percentageLabel_3;
    QLineEdit *temperatureMarginMaximumEdit;
    QLabel *settingsMagimumLabel;
    QSpacerItem *verticalSpacer_16;
    QFrame *line_17;
    QSpacerItem *verticalSpacer_9;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *settingsApplyButton;
    QPushButton *settingsDefaultButton;
    QSpacerItem *verticalSpacer_17;
    QFrame *line;
    QPushButton *lock;
    QFrame *line_11;
    QVBoxLayout *verticalLayout_18;
    QTextEdit *textEdit;
    QFrame *line_10;
    QPushButton *pushButtonReturn_5;
    QWidget *help;
    QVBoxLayout *verticalLayout_20;
    QLabel *helpLabel;
    QHBoxLayout *horizontalLayout_11;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *secretPushButton;
    QSpacerItem *horizontalSpacer_4;
    QLabel *helpTestLabel;
    QSpacerItem *verticalSpacer_14;
    QPushButton *pushButtonReturn_6;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1280, 720);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(128);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(1280, 720));
        MainWindow->setMaximumSize(QSize(12800, 7200));
        QFont font;
        font.setPointSize(12);
        MainWindow->setFont(font);
        MainWindow->setAnimated(true);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout_7 = new QVBoxLayout(centralWidget);
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setContentsMargins(11, 11, 11, 11);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        stackedWidget = new QStackedWidget(centralWidget);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        mainScreen = new QWidget();
        mainScreen->setObjectName(QStringLiteral("mainScreen"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mainScreen->sizePolicy().hasHeightForWidth());
        mainScreen->setSizePolicy(sizePolicy1);
        horizontalLayout = new QHBoxLayout(mainScreen);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        mainScreenImageLabel = new QLabel(mainScreen);
        mainScreenImageLabel->setObjectName(QStringLiteral("mainScreenImageLabel"));
        mainScreenImageLabel->setEnabled(true);
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(mainScreenImageLabel->sizePolicy().hasHeightForWidth());
        mainScreenImageLabel->setSizePolicy(sizePolicy2);
        mainScreenImageLabel->setPixmap(QPixmap(QString::fromUtf8(":/graphics/graphics/mainScreenImage.png")));
        mainScreenImageLabel->setScaledContents(true);
        mainScreenImageLabel->setWordWrap(false);

        horizontalLayout->addWidget(mainScreenImageLabel);

        horizontalSpacer_9 = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_9);

        line_5 = new QFrame(mainScreen);
        line_5->setObjectName(QStringLiteral("line_5"));
        line_5->setFrameShape(QFrame::VLine);
        line_5->setFrameShadow(QFrame::Sunken);

        horizontalLayout->addWidget(line_5);

        horizontalSpacer = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        pushButtonStatus = new QPushButton(mainScreen);
        pushButtonStatus->setObjectName(QStringLiteral("pushButtonStatus"));
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(pushButtonStatus->sizePolicy().hasHeightForWidth());
        pushButtonStatus->setSizePolicy(sizePolicy3);
        pushButtonStatus->setMinimumSize(QSize(300, 100));
        QFont font1;
        font1.setPointSize(30);
        font1.setBold(false);
        font1.setWeight(50);
        pushButtonStatus->setFont(font1);

        verticalLayout->addWidget(pushButtonStatus, 0, Qt::AlignHCenter|Qt::AlignVCenter);

        verticalSpacer = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer);

        pushButtonFullness = new QPushButton(mainScreen);
        pushButtonFullness->setObjectName(QStringLiteral("pushButtonFullness"));
        sizePolicy3.setHeightForWidth(pushButtonFullness->sizePolicy().hasHeightForWidth());
        pushButtonFullness->setSizePolicy(sizePolicy3);
        pushButtonFullness->setMinimumSize(QSize(300, 100));
        pushButtonFullness->setFont(font1);

        verticalLayout->addWidget(pushButtonFullness, 0, Qt::AlignHCenter|Qt::AlignVCenter);

        pushButtonTemperature = new QPushButton(mainScreen);
        pushButtonTemperature->setObjectName(QStringLiteral("pushButtonTemperature"));
        sizePolicy3.setHeightForWidth(pushButtonTemperature->sizePolicy().hasHeightForWidth());
        pushButtonTemperature->setSizePolicy(sizePolicy3);
        pushButtonTemperature->setMinimumSize(QSize(300, 100));
        pushButtonTemperature->setFont(font1);

        verticalLayout->addWidget(pushButtonTemperature, 0, Qt::AlignHCenter|Qt::AlignVCenter);

        pushButtonHumidity = new QPushButton(mainScreen);
        pushButtonHumidity->setObjectName(QStringLiteral("pushButtonHumidity"));
        sizePolicy3.setHeightForWidth(pushButtonHumidity->sizePolicy().hasHeightForWidth());
        pushButtonHumidity->setSizePolicy(sizePolicy3);
        pushButtonHumidity->setMinimumSize(QSize(300, 100));
        pushButtonHumidity->setFont(font1);

        verticalLayout->addWidget(pushButtonHumidity, 0, Qt::AlignHCenter|Qt::AlignVCenter);

        buttonsVerticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(buttonsVerticalSpacer);

        pushButtonSettings = new QPushButton(mainScreen);
        pushButtonSettings->setObjectName(QStringLiteral("pushButtonSettings"));
        sizePolicy3.setHeightForWidth(pushButtonSettings->sizePolicy().hasHeightForWidth());
        pushButtonSettings->setSizePolicy(sizePolicy3);
        pushButtonSettings->setMinimumSize(QSize(200, 50));
        QFont font2;
        font2.setPointSize(25);
        font2.setBold(false);
        font2.setWeight(50);
        pushButtonSettings->setFont(font2);

        verticalLayout->addWidget(pushButtonSettings, 0, Qt::AlignRight);

        pushButtonHelp = new QPushButton(mainScreen);
        pushButtonHelp->setObjectName(QStringLiteral("pushButtonHelp"));
        sizePolicy3.setHeightForWidth(pushButtonHelp->sizePolicy().hasHeightForWidth());
        pushButtonHelp->setSizePolicy(sizePolicy3);
        pushButtonHelp->setMinimumSize(QSize(200, 50));
        pushButtonHelp->setFont(font2);

        verticalLayout->addWidget(pushButtonHelp, 0, Qt::AlignRight|Qt::AlignVCenter);

        verticalSpacer_10 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_10);

        pushButtonExit = new QPushButton(mainScreen);
        pushButtonExit->setObjectName(QStringLiteral("pushButtonExit"));
        sizePolicy3.setHeightForWidth(pushButtonExit->sizePolicy().hasHeightForWidth());
        pushButtonExit->setSizePolicy(sizePolicy3);
        pushButtonExit->setMinimumSize(QSize(200, 50));
        pushButtonExit->setFont(font2);

        verticalLayout->addWidget(pushButtonExit, 0, Qt::AlignRight|Qt::AlignVCenter);


        horizontalLayout->addLayout(verticalLayout);

        stackedWidget->addWidget(mainScreen);
        status = new QWidget();
        status->setObjectName(QStringLiteral("status"));
        verticalLayout_4 = new QVBoxLayout(status);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        statusLabel_2 = new QLabel(status);
        statusLabel_2->setObjectName(QStringLiteral("statusLabel_2"));
        QFont font3;
        font3.setPointSize(50);
        font3.setBold(false);
        font3.setWeight(50);
        statusLabel_2->setFont(font3);

        verticalLayout_4->addWidget(statusLabel_2, 0, Qt::AlignHCenter|Qt::AlignVCenter);

        verticalSpacer_2 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_4->addItem(verticalSpacer_2);

        horizontalLayout_19 = new QHBoxLayout();
        horizontalLayout_19->setSpacing(6);
        horizontalLayout_19->setObjectName(QStringLiteral("horizontalLayout_19"));
        statusFullness = new clickableWidget(status);
        statusFullness->setObjectName(QStringLiteral("statusFullness"));
        verticalLayout_6 = new QVBoxLayout(statusFullness);
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setContentsMargins(11, 11, 11, 11);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        label_5 = new QLabel(statusFullness);
        label_5->setObjectName(QStringLiteral("label_5"));
        QFont font4;
        font4.setPointSize(35);
        label_5->setFont(font4);

        verticalLayout_6->addWidget(label_5, 0, Qt::AlignHCenter|Qt::AlignVCenter);

        statusFullnessProgressBar = new QProgressBar(statusFullness);
        statusFullnessProgressBar->setObjectName(QStringLiteral("statusFullnessProgressBar"));
        QSizePolicy sizePolicy4(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(statusFullnessProgressBar->sizePolicy().hasHeightForWidth());
        statusFullnessProgressBar->setSizePolicy(sizePolicy4);
        statusFullnessProgressBar->setMinimumSize(QSize(0, 0));
        statusFullnessProgressBar->setBaseSize(QSize(0, 0));
        QFont font5;
        font5.setPointSize(25);
        statusFullnessProgressBar->setFont(font5);
        statusFullnessProgressBar->setValue(25);
        statusFullnessProgressBar->setOrientation(Qt::Vertical);
        statusFullnessProgressBar->setInvertedAppearance(false);
        statusFullnessProgressBar->setTextDirection(QProgressBar::TopToBottom);

        verticalLayout_6->addWidget(statusFullnessProgressBar, 0, Qt::AlignHCenter);


        horizontalLayout_19->addWidget(statusFullness);

        line_12 = new QFrame(status);
        line_12->setObjectName(QStringLiteral("line_12"));
        line_12->setFrameShape(QFrame::VLine);
        line_12->setFrameShadow(QFrame::Sunken);

        horizontalLayout_19->addWidget(line_12);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setSpacing(6);
        horizontalLayout_14->setObjectName(QStringLiteral("horizontalLayout_14"));
        ledGreen = new QLabel(status);
        ledGreen->setObjectName(QStringLiteral("ledGreen"));
        ledGreen->setEnabled(true);
        sizePolicy2.setHeightForWidth(ledGreen->sizePolicy().hasHeightForWidth());
        ledGreen->setSizePolicy(sizePolicy2);
        ledGreen->setPixmap(QPixmap(QString::fromUtf8(":/graphics/graphics/ledGreen.png")));
        ledGreen->setScaledContents(true);
        ledGreen->setAlignment(Qt::AlignCenter);

        horizontalLayout_14->addWidget(ledGreen);

        horizontalSpacer_13 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_14->addItem(horizontalSpacer_13);

        ledYellow = new QLabel(status);
        ledYellow->setObjectName(QStringLiteral("ledYellow"));
        ledYellow->setEnabled(false);
        sizePolicy2.setHeightForWidth(ledYellow->sizePolicy().hasHeightForWidth());
        ledYellow->setSizePolicy(sizePolicy2);
        ledYellow->setPixmap(QPixmap(QString::fromUtf8(":/graphics/graphics/ledYellow.png")));
        ledYellow->setScaledContents(true);
        ledYellow->setAlignment(Qt::AlignCenter);

        horizontalLayout_14->addWidget(ledYellow);

        horizontalSpacer_14 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_14->addItem(horizontalSpacer_14);

        ledRed = new QLabel(status);
        ledRed->setObjectName(QStringLiteral("ledRed"));
        ledRed->setEnabled(false);
        sizePolicy2.setHeightForWidth(ledRed->sizePolicy().hasHeightForWidth());
        ledRed->setSizePolicy(sizePolicy2);
        ledRed->setPixmap(QPixmap(QString::fromUtf8(":/graphics/graphics/ledRed.png")));
        ledRed->setScaledContents(true);
        ledRed->setAlignment(Qt::AlignCenter);

        horizontalLayout_14->addWidget(ledRed);

        horizontalSpacer_12 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_14->addItem(horizontalSpacer_12);

        label_6 = new QLabel(status);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setFont(font4);

        horizontalLayout_14->addWidget(label_6, 0, Qt::AlignLeft|Qt::AlignVCenter);

        label_8 = new QLabel(status);
        label_8->setObjectName(QStringLiteral("label_8"));
        QFont font6;
        font6.setPointSize(35);
        font6.setBold(true);
        font6.setWeight(75);
        label_8->setFont(font6);

        horizontalLayout_14->addWidget(label_8, 0, Qt::AlignLeft|Qt::AlignVCenter);

        horizontalSpacer_11 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_14->addItem(horizontalSpacer_11);


        verticalLayout_3->addLayout(horizontalLayout_14);

        line_13 = new QFrame(status);
        line_13->setObjectName(QStringLiteral("line_13"));
        line_13->setFrameShape(QFrame::HLine);
        line_13->setFrameShadow(QFrame::Sunken);

        verticalLayout_3->addWidget(line_13);

        horizontalLayout_17 = new QHBoxLayout();
        horizontalLayout_17->setSpacing(6);
        horizontalLayout_17->setObjectName(QStringLiteral("horizontalLayout_17"));
        statusTemperature = new clickableWidget(status);
        statusTemperature->setObjectName(QStringLiteral("statusTemperature"));
        verticalLayout_2 = new QVBoxLayout(statusTemperature);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label = new QLabel(statusTemperature);
        label->setObjectName(QStringLiteral("label"));
        label->setFont(font4);

        verticalLayout_2->addWidget(label, 0, Qt::AlignHCenter|Qt::AlignVCenter);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setSpacing(6);
        horizontalLayout_13->setObjectName(QStringLiteral("horizontalLayout_13"));
        horizontalSpacer_17 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_13->addItem(horizontalSpacer_17);

        statusTemperatureNumber = new QLabel(statusTemperature);
        statusTemperatureNumber->setObjectName(QStringLiteral("statusTemperatureNumber"));
        QFont font7;
        font7.setPointSize(100);
        statusTemperatureNumber->setFont(font7);

        horizontalLayout_13->addWidget(statusTemperatureNumber, 0, Qt::AlignRight|Qt::AlignVCenter);

        celsiusLabel_4 = new QLabel(statusTemperature);
        celsiusLabel_4->setObjectName(QStringLiteral("celsiusLabel_4"));
        sizePolicy1.setHeightForWidth(celsiusLabel_4->sizePolicy().hasHeightForWidth());
        celsiusLabel_4->setSizePolicy(sizePolicy1);
        QFont font8;
        font8.setPointSize(100);
        font8.setKerning(false);
        celsiusLabel_4->setFont(font8);

        horizontalLayout_13->addWidget(celsiusLabel_4, 0, Qt::AlignLeft|Qt::AlignVCenter);

        horizontalSpacer_18 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_13->addItem(horizontalSpacer_18);


        verticalLayout_2->addLayout(horizontalLayout_13);


        horizontalLayout_17->addWidget(statusTemperature);

        line_14 = new QFrame(status);
        line_14->setObjectName(QStringLiteral("line_14"));
        line_14->setFrameShape(QFrame::VLine);
        line_14->setFrameShadow(QFrame::Sunken);

        horizontalLayout_17->addWidget(line_14);

        statusHumidity = new clickableWidget(status);
        statusHumidity->setObjectName(QStringLiteral("statusHumidity"));
        verticalLayout_5 = new QVBoxLayout(statusHumidity);
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        label_2 = new QLabel(statusHumidity);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font4);

        verticalLayout_5->addWidget(label_2, 0, Qt::AlignHCenter|Qt::AlignVCenter);

        horizontalLayout_18 = new QHBoxLayout();
        horizontalLayout_18->setSpacing(6);
        horizontalLayout_18->setObjectName(QStringLiteral("horizontalLayout_18"));
        horizontalSpacer_19 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_18->addItem(horizontalSpacer_19);

        statusHumidityNumber = new QLabel(statusHumidity);
        statusHumidityNumber->setObjectName(QStringLiteral("statusHumidityNumber"));
        statusHumidityNumber->setFont(font7);

        horizontalLayout_18->addWidget(statusHumidityNumber, 0, Qt::AlignRight|Qt::AlignVCenter);

        percentageLabel_1 = new QLabel(statusHumidity);
        percentageLabel_1->setObjectName(QStringLiteral("percentageLabel_1"));
        sizePolicy1.setHeightForWidth(percentageLabel_1->sizePolicy().hasHeightForWidth());
        percentageLabel_1->setSizePolicy(sizePolicy1);
        percentageLabel_1->setFont(font7);

        horizontalLayout_18->addWidget(percentageLabel_1, 0, Qt::AlignLeft|Qt::AlignVCenter);

        horizontalSpacer_20 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_18->addItem(horizontalSpacer_20);


        verticalLayout_5->addLayout(horizontalLayout_18);


        horizontalLayout_17->addWidget(statusHumidity);


        verticalLayout_3->addLayout(horizontalLayout_17);


        horizontalLayout_19->addLayout(verticalLayout_3);


        verticalLayout_4->addLayout(horizontalLayout_19);

        line_15 = new QFrame(status);
        line_15->setObjectName(QStringLiteral("line_15"));
        line_15->setFrameShape(QFrame::HLine);
        line_15->setFrameShadow(QFrame::Sunken);

        verticalLayout_4->addWidget(line_15);

        pushButtonReturn_1 = new QPushButton(status);
        pushButtonReturn_1->setObjectName(QStringLiteral("pushButtonReturn_1"));
        sizePolicy3.setHeightForWidth(pushButtonReturn_1->sizePolicy().hasHeightForWidth());
        pushButtonReturn_1->setSizePolicy(sizePolicy3);
        pushButtonReturn_1->setMinimumSize(QSize(200, 50));
        QFont font9;
        font9.setPointSize(25);
        font9.setBold(false);
        font9.setItalic(false);
        font9.setWeight(50);
        pushButtonReturn_1->setFont(font9);

        verticalLayout_4->addWidget(pushButtonReturn_1, 0, Qt::AlignRight|Qt::AlignVCenter);

        stackedWidget->addWidget(status);
        statusLabel_2->raise();
        line_15->raise();
        pushButtonReturn_1->raise();
        fullness = new QWidget();
        fullness->setObjectName(QStringLiteral("fullness"));
        verticalLayout_21 = new QVBoxLayout(fullness);
        verticalLayout_21->setSpacing(6);
        verticalLayout_21->setContentsMargins(11, 11, 11, 11);
        verticalLayout_21->setObjectName(QStringLiteral("verticalLayout_21"));
        fullnessLabel = new QLabel(fullness);
        fullnessLabel->setObjectName(QStringLiteral("fullnessLabel"));
        fullnessLabel->setFont(font3);

        verticalLayout_21->addWidget(fullnessLabel, 0, Qt::AlignHCenter|Qt::AlignVCenter);

        verticalSpacer_4 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_21->addItem(verticalSpacer_4);

        fullnessBar_1 = new QProgressBar(fullness);
        fullnessBar_1->setObjectName(QStringLiteral("fullnessBar_1"));
        QSizePolicy sizePolicy5(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(fullnessBar_1->sizePolicy().hasHeightForWidth());
        fullnessBar_1->setSizePolicy(sizePolicy5);
        QFont font10;
        font10.setPointSize(35);
        font10.setBold(false);
        font10.setWeight(50);
        fullnessBar_1->setFont(font10);
        fullnessBar_1->setValue(25);
        fullnessBar_1->setTextVisible(true);
        fullnessBar_1->setInvertedAppearance(false);

        verticalLayout_21->addWidget(fullnessBar_1, 0, Qt::AlignVCenter);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_21->addItem(verticalSpacer_3);

        line_3 = new QFrame(fullness);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        verticalLayout_21->addWidget(line_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setSpacing(6);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        FullnessEstimationLabel_2 = new QLabel(fullness);
        FullnessEstimationLabel_2->setObjectName(QStringLiteral("FullnessEstimationLabel_2"));
        FullnessEstimationLabel_2->setFont(font4);

        verticalLayout_8->addWidget(FullnessEstimationLabel_2, 0, Qt::AlignHCenter|Qt::AlignVCenter);

        proximityPlot = new MyPlot(fullness);
        proximityPlot->setObjectName(QStringLiteral("proximityPlot"));
        sizePolicy2.setHeightForWidth(proximityPlot->sizePolicy().hasHeightForWidth());
        proximityPlot->setSizePolicy(sizePolicy2);
        proximityPlot->setMinimumSize(QSize(0, 0));

        verticalLayout_8->addWidget(proximityPlot);


        horizontalLayout_2->addLayout(verticalLayout_8);

        line_2 = new QFrame(fullness);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);

        horizontalLayout_2->addWidget(line_2);

        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setSpacing(6);
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_2);

        FullnessEstimationLabel = new QLabel(fullness);
        FullnessEstimationLabel->setObjectName(QStringLiteral("FullnessEstimationLabel"));
        FullnessEstimationLabel->setFont(font4);

        horizontalLayout_6->addWidget(FullnessEstimationLabel, 0, Qt::AlignHCenter|Qt::AlignVCenter);

        fullnessEstimationNumber = new QLabel(fullness);
        fullnessEstimationNumber->setObjectName(QStringLiteral("fullnessEstimationNumber"));
        fullnessEstimationNumber->setFont(font6);

        horizontalLayout_6->addWidget(fullnessEstimationNumber, 0, Qt::AlignHCenter|Qt::AlignVCenter);

        fullnessEstimationUnit = new QLabel(fullness);
        fullnessEstimationUnit->setObjectName(QStringLiteral("fullnessEstimationUnit"));
        fullnessEstimationUnit->setMinimumSize(QSize(0, 0));
        fullnessEstimationUnit->setMaximumSize(QSize(16777215, 192));
        fullnessEstimationUnit->setFont(font10);

        horizontalLayout_6->addWidget(fullnessEstimationUnit, 0, Qt::AlignLeft|Qt::AlignVCenter);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_3);


        verticalLayout_9->addLayout(horizontalLayout_6);

        fullnessPlot = new MyPlot(fullness);
        fullnessPlot->setObjectName(QStringLiteral("fullnessPlot"));
        sizePolicy2.setHeightForWidth(fullnessPlot->sizePolicy().hasHeightForWidth());
        fullnessPlot->setSizePolicy(sizePolicy2);
        fullnessPlot->setMinimumSize(QSize(0, 0));

        verticalLayout_9->addWidget(fullnessPlot);


        horizontalLayout_2->addLayout(verticalLayout_9);


        verticalLayout_21->addLayout(horizontalLayout_2);

        line_8 = new QFrame(fullness);
        line_8->setObjectName(QStringLiteral("line_8"));
        line_8->setFrameShape(QFrame::HLine);
        line_8->setFrameShadow(QFrame::Sunken);

        verticalLayout_21->addWidget(line_8);

        pushButtonReturn_2 = new QPushButton(fullness);
        pushButtonReturn_2->setObjectName(QStringLiteral("pushButtonReturn_2"));
        sizePolicy3.setHeightForWidth(pushButtonReturn_2->sizePolicy().hasHeightForWidth());
        pushButtonReturn_2->setSizePolicy(sizePolicy3);
        pushButtonReturn_2->setMinimumSize(QSize(200, 50));
        pushButtonReturn_2->setFont(font2);

        verticalLayout_21->addWidget(pushButtonReturn_2, 0, Qt::AlignRight|Qt::AlignVCenter);

        stackedWidget->addWidget(fullness);
        temperature = new QWidget();
        temperature->setObjectName(QStringLiteral("temperature"));
        verticalLayout_12 = new QVBoxLayout(temperature);
        verticalLayout_12->setSpacing(6);
        verticalLayout_12->setContentsMargins(11, 11, 11, 11);
        verticalLayout_12->setObjectName(QStringLiteral("verticalLayout_12"));
        temperatureLabel = new QLabel(temperature);
        temperatureLabel->setObjectName(QStringLiteral("temperatureLabel"));
        temperatureLabel->setFont(font3);

        verticalLayout_12->addWidget(temperatureLabel, 0, Qt::AlignHCenter|Qt::AlignVCenter);

        verticalSpacer_11 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_12->addItem(verticalSpacer_11);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        verticalLayout_11 = new QVBoxLayout();
        verticalLayout_11->setSpacing(6);
        verticalLayout_11->setObjectName(QStringLiteral("verticalLayout_11"));
        temperaturePlot = new MyPlot(temperature);
        temperaturePlot->setObjectName(QStringLiteral("temperaturePlot"));
        sizePolicy2.setHeightForWidth(temperaturePlot->sizePolicy().hasHeightForWidth());
        temperaturePlot->setSizePolicy(sizePolicy2);

        verticalLayout_11->addWidget(temperaturePlot);

        temperatureResetButton = new QPushButton(temperature);
        temperatureResetButton->setObjectName(QStringLiteral("temperatureResetButton"));
        sizePolicy3.setHeightForWidth(temperatureResetButton->sizePolicy().hasHeightForWidth());
        temperatureResetButton->setSizePolicy(sizePolicy3);
        temperatureResetButton->setMinimumSize(QSize(250, 75));
        QFont font11;
        font11.setPointSize(30);
        temperatureResetButton->setFont(font11);

        verticalLayout_11->addWidget(temperatureResetButton, 0, Qt::AlignLeft|Qt::AlignVCenter);


        horizontalLayout_4->addLayout(verticalLayout_11);

        line_6 = new QFrame(temperature);
        line_6->setObjectName(QStringLiteral("line_6"));
        line_6->setFrameShape(QFrame::VLine);
        line_6->setFrameShadow(QFrame::Sunken);

        horizontalLayout_4->addWidget(line_6);

        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setSpacing(6);
        verticalLayout_10->setObjectName(QStringLiteral("verticalLayout_10"));
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        horizontalSpacer_6 = new QSpacerItem(30, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_6);

        label_3 = new QLabel(temperature);
        label_3->setObjectName(QStringLiteral("label_3"));
        QFont font12;
        font12.setPointSize(65);
        label_3->setFont(font12);

        horizontalLayout_7->addWidget(label_3, 0, Qt::AlignRight|Qt::AlignVCenter);

        celsiusLabel_2 = new QLabel(temperature);
        celsiusLabel_2->setObjectName(QStringLiteral("celsiusLabel_2"));
        sizePolicy1.setHeightForWidth(celsiusLabel_2->sizePolicy().hasHeightForWidth());
        celsiusLabel_2->setSizePolicy(sizePolicy1);
        celsiusLabel_2->setFont(font12);

        horizontalLayout_7->addWidget(celsiusLabel_2, 0, Qt::AlignLeft|Qt::AlignVCenter);

        horizontalSpacer_7 = new QSpacerItem(30, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_7);


        verticalLayout_10->addLayout(horizontalLayout_7);

        temperatureGauge = new QcGaugeWidget(temperature);
        temperatureGauge->setObjectName(QStringLiteral("temperatureGauge"));
        QSizePolicy sizePolicy6(QSizePolicy::Fixed, QSizePolicy::Expanding);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(temperatureGauge->sizePolicy().hasHeightForWidth());
        temperatureGauge->setSizePolicy(sizePolicy6);
        temperatureGauge->setMinimumSize(QSize(400, 0));

        verticalLayout_10->addWidget(temperatureGauge);


        horizontalLayout_4->addLayout(verticalLayout_10);


        verticalLayout_12->addLayout(horizontalLayout_4);

        line_4 = new QFrame(temperature);
        line_4->setObjectName(QStringLiteral("line_4"));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);

        verticalLayout_12->addWidget(line_4);

        pushButtonReturn_3 = new QPushButton(temperature);
        pushButtonReturn_3->setObjectName(QStringLiteral("pushButtonReturn_3"));
        sizePolicy3.setHeightForWidth(pushButtonReturn_3->sizePolicy().hasHeightForWidth());
        pushButtonReturn_3->setSizePolicy(sizePolicy3);
        pushButtonReturn_3->setMinimumSize(QSize(200, 50));
        pushButtonReturn_3->setFont(font2);
        pushButtonReturn_3->setLayoutDirection(Qt::LeftToRight);
        pushButtonReturn_3->setAutoFillBackground(false);
        pushButtonReturn_3->setCheckable(false);

        verticalLayout_12->addWidget(pushButtonReturn_3, 0, Qt::AlignRight|Qt::AlignVCenter);

        stackedWidget->addWidget(temperature);
        humidity = new QWidget();
        humidity->setObjectName(QStringLiteral("humidity"));
        verticalLayout_15 = new QVBoxLayout(humidity);
        verticalLayout_15->setSpacing(6);
        verticalLayout_15->setContentsMargins(11, 11, 11, 11);
        verticalLayout_15->setObjectName(QStringLiteral("verticalLayout_15"));
        temperatureLabel_2 = new QLabel(humidity);
        temperatureLabel_2->setObjectName(QStringLiteral("temperatureLabel_2"));
        temperatureLabel_2->setFont(font3);

        verticalLayout_15->addWidget(temperatureLabel_2, 0, Qt::AlignHCenter|Qt::AlignVCenter);

        verticalSpacer_12 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_15->addItem(verticalSpacer_12);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        verticalLayout_13 = new QVBoxLayout();
        verticalLayout_13->setSpacing(6);
        verticalLayout_13->setObjectName(QStringLiteral("verticalLayout_13"));
        humidityPlot = new MyPlot(humidity);
        humidityPlot->setObjectName(QStringLiteral("humidityPlot"));
        sizePolicy2.setHeightForWidth(humidityPlot->sizePolicy().hasHeightForWidth());
        humidityPlot->setSizePolicy(sizePolicy2);

        verticalLayout_13->addWidget(humidityPlot);

        humidityResetButton = new QPushButton(humidity);
        humidityResetButton->setObjectName(QStringLiteral("humidityResetButton"));
        sizePolicy3.setHeightForWidth(humidityResetButton->sizePolicy().hasHeightForWidth());
        humidityResetButton->setSizePolicy(sizePolicy3);
        humidityResetButton->setMinimumSize(QSize(250, 75));
        humidityResetButton->setFont(font11);

        verticalLayout_13->addWidget(humidityResetButton, 0, Qt::AlignLeft|Qt::AlignVCenter);


        horizontalLayout_5->addLayout(verticalLayout_13);

        line_9 = new QFrame(humidity);
        line_9->setObjectName(QStringLiteral("line_9"));
        line_9->setFrameShape(QFrame::VLine);
        line_9->setFrameShadow(QFrame::Sunken);

        horizontalLayout_5->addWidget(line_9);

        verticalLayout_14 = new QVBoxLayout();
        verticalLayout_14->setSpacing(6);
        verticalLayout_14->setObjectName(QStringLiteral("verticalLayout_14"));
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        horizontalSpacer_8 = new QSpacerItem(30, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_8);

        label_4 = new QLabel(humidity);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setFont(font12);
        label_4->setWordWrap(false);
        label_4->setMargin(0);

        horizontalLayout_8->addWidget(label_4);

        celsiusLabel_5 = new QLabel(humidity);
        celsiusLabel_5->setObjectName(QStringLiteral("celsiusLabel_5"));
        sizePolicy1.setHeightForWidth(celsiusLabel_5->sizePolicy().hasHeightForWidth());
        celsiusLabel_5->setSizePolicy(sizePolicy1);
        celsiusLabel_5->setFont(font12);

        horizontalLayout_8->addWidget(celsiusLabel_5, 0, Qt::AlignHCenter|Qt::AlignVCenter);

        horizontalSpacer_10 = new QSpacerItem(30, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_10);


        verticalLayout_14->addLayout(horizontalLayout_8);

        humidiryGauge = new QcGaugeWidget(humidity);
        humidiryGauge->setObjectName(QStringLiteral("humidiryGauge"));
        sizePolicy6.setHeightForWidth(humidiryGauge->sizePolicy().hasHeightForWidth());
        humidiryGauge->setSizePolicy(sizePolicy6);
        humidiryGauge->setMinimumSize(QSize(400, 0));

        verticalLayout_14->addWidget(humidiryGauge);


        horizontalLayout_5->addLayout(verticalLayout_14);


        verticalLayout_15->addLayout(horizontalLayout_5);

        line_7 = new QFrame(humidity);
        line_7->setObjectName(QStringLiteral("line_7"));
        line_7->setFrameShape(QFrame::HLine);
        line_7->setFrameShadow(QFrame::Sunken);

        verticalLayout_15->addWidget(line_7);

        pushButtonReturn_4 = new QPushButton(humidity);
        pushButtonReturn_4->setObjectName(QStringLiteral("pushButtonReturn_4"));
        sizePolicy3.setHeightForWidth(pushButtonReturn_4->sizePolicy().hasHeightForWidth());
        pushButtonReturn_4->setSizePolicy(sizePolicy3);
        pushButtonReturn_4->setMinimumSize(QSize(200, 50));
        pushButtonReturn_4->setFont(font2);
        pushButtonReturn_4->setLayoutDirection(Qt::LeftToRight);
        pushButtonReturn_4->setAutoFillBackground(false);
        pushButtonReturn_4->setCheckable(false);

        verticalLayout_15->addWidget(pushButtonReturn_4, 0, Qt::AlignRight|Qt::AlignVCenter);

        stackedWidget->addWidget(humidity);
        settings = new QWidget();
        settings->setObjectName(QStringLiteral("settings"));
        verticalLayout_17 = new QVBoxLayout(settings);
        verticalLayout_17->setSpacing(6);
        verticalLayout_17->setContentsMargins(11, 11, 11, 11);
        verticalLayout_17->setObjectName(QStringLiteral("verticalLayout_17"));
        settingsLabel = new QLabel(settings);
        settingsLabel->setObjectName(QStringLiteral("settingsLabel"));
        sizePolicy1.setHeightForWidth(settingsLabel->sizePolicy().hasHeightForWidth());
        settingsLabel->setSizePolicy(sizePolicy1);
        settingsLabel->setFont(font3);

        verticalLayout_17->addWidget(settingsLabel, 0, Qt::AlignHCenter|Qt::AlignVCenter);

        verticalSpacer_8 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_17->addItem(verticalSpacer_8);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        verticalLayout_16 = new QVBoxLayout();
        verticalLayout_16->setSpacing(6);
        verticalLayout_16->setObjectName(QStringLiteral("verticalLayout_16"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(6);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        detectionRangeLabel = new QLabel(settings);
        detectionRangeLabel->setObjectName(QStringLiteral("detectionRangeLabel"));
        detectionRangeLabel->setEnabled(true);
        QFont font13;
        font13.setPointSize(20);
        font13.setBold(false);
        font13.setWeight(50);
        detectionRangeLabel->setFont(font13);

        gridLayout_2->addWidget(detectionRangeLabel, 6, 0, 1, 1);

        languageLabel = new QLabel(settings);
        languageLabel->setObjectName(QStringLiteral("languageLabel"));
        sizePolicy1.setHeightForWidth(languageLabel->sizePolicy().hasHeightForWidth());
        languageLabel->setSizePolicy(sizePolicy1);
        languageLabel->setFont(font13);

        gridLayout_2->addWidget(languageLabel, 0, 0, 1, 1);

        proximityOpeningCheckBox = new QCheckBox(settings);
        proximityOpeningCheckBox->setObjectName(QStringLiteral("proximityOpeningCheckBox"));
        proximityOpeningCheckBox->setEnabled(true);
        QSizePolicy sizePolicy7(QSizePolicy::Expanding, QSizePolicy::Minimum);
        sizePolicy7.setHorizontalStretch(0);
        sizePolicy7.setVerticalStretch(0);
        sizePolicy7.setHeightForWidth(proximityOpeningCheckBox->sizePolicy().hasHeightForWidth());
        proximityOpeningCheckBox->setSizePolicy(sizePolicy7);
        proximityOpeningCheckBox->setFont(font13);
        proximityOpeningCheckBox->setChecked(true);

        gridLayout_2->addWidget(proximityOpeningCheckBox, 4, 1, 1, 1, Qt::AlignHCenter|Qt::AlignVCenter);

        verticalSpacer_5 = new QSpacerItem(20, 2, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_2->addItem(verticalSpacer_5, 1, 0, 1, 1);

        languageComboBox = new QComboBox(settings);
        languageComboBox->setObjectName(QStringLiteral("languageComboBox"));
        sizePolicy7.setHeightForWidth(languageComboBox->sizePolicy().hasHeightForWidth());
        languageComboBox->setSizePolicy(sizePolicy7);
        QFont font14;
        font14.setPointSize(20);
        languageComboBox->setFont(font14);

        gridLayout_2->addWidget(languageComboBox, 0, 1, 1, 1, Qt::AlignHCenter|Qt::AlignVCenter);

        openingSpeedScrollBar = new QScrollBar(settings);
        openingSpeedScrollBar->setObjectName(QStringLiteral("openingSpeedScrollBar"));
        QSizePolicy sizePolicy8(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy8.setHorizontalStretch(0);
        sizePolicy8.setVerticalStretch(0);
        sizePolicy8.setHeightForWidth(openingSpeedScrollBar->sizePolicy().hasHeightForWidth());
        openingSpeedScrollBar->setSizePolicy(sizePolicy8);
        openingSpeedScrollBar->setFont(font5);
        openingSpeedScrollBar->setMaximum(100);
        openingSpeedScrollBar->setSliderPosition(50);
        openingSpeedScrollBar->setOrientation(Qt::Horizontal);
        openingSpeedScrollBar->setInvertedControls(false);

        gridLayout_2->addWidget(openingSpeedScrollBar, 5, 1, 1, 1);

        detectionRangeScrollBar = new QScrollBar(settings);
        detectionRangeScrollBar->setObjectName(QStringLiteral("detectionRangeScrollBar"));
        detectionRangeScrollBar->setEnabled(true);
        sizePolicy8.setHeightForWidth(detectionRangeScrollBar->sizePolicy().hasHeightForWidth());
        detectionRangeScrollBar->setSizePolicy(sizePolicy8);
        detectionRangeScrollBar->setFont(font5);
        detectionRangeScrollBar->setMaximum(100);
        detectionRangeScrollBar->setSliderPosition(50);
        detectionRangeScrollBar->setOrientation(Qt::Horizontal);
        detectionRangeScrollBar->setInvertedControls(false);

        gridLayout_2->addWidget(detectionRangeScrollBar, 6, 1, 1, 1);

        openingSpeedLabel = new QLabel(settings);
        openingSpeedLabel->setObjectName(QStringLiteral("openingSpeedLabel"));
        openingSpeedLabel->setEnabled(true);
        openingSpeedLabel->setFont(font13);

        gridLayout_2->addWidget(openingSpeedLabel, 5, 0, 1, 1);

        proximityOpeningLabel = new QLabel(settings);
        proximityOpeningLabel->setObjectName(QStringLiteral("proximityOpeningLabel"));
        proximityOpeningLabel->setFont(font13);

        gridLayout_2->addWidget(proximityOpeningLabel, 4, 0, 1, 1);

        line_18 = new QFrame(settings);
        line_18->setObjectName(QStringLiteral("line_18"));
        line_18->setFrameShape(QFrame::HLine);
        line_18->setFrameShadow(QFrame::Sunken);

        gridLayout_2->addWidget(line_18, 2, 0, 1, 2);

        verticalSpacer_15 = new QSpacerItem(20, 2, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_2->addItem(verticalSpacer_15, 3, 0, 1, 1);


        verticalLayout_16->addLayout(gridLayout_2);

        verticalSpacer_6 = new QSpacerItem(20, 2, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_16->addItem(verticalSpacer_6);

        line_16 = new QFrame(settings);
        line_16->setObjectName(QStringLiteral("line_16"));
        line_16->setFrameShape(QFrame::HLine);
        line_16->setFrameShadow(QFrame::Sunken);

        verticalLayout_16->addWidget(line_16);

        verticalSpacer_7 = new QSpacerItem(20, 2, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_16->addItem(verticalSpacer_7);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        celsiusLabel_3 = new QLabel(settings);
        celsiusLabel_3->setObjectName(QStringLiteral("celsiusLabel_3"));
        sizePolicy1.setHeightForWidth(celsiusLabel_3->sizePolicy().hasHeightForWidth());
        celsiusLabel_3->setSizePolicy(sizePolicy1);
        celsiusLabel_3->setFont(font14);

        gridLayout->addWidget(celsiusLabel_3, 1, 4, 1, 1, Qt::AlignHCenter|Qt::AlignVCenter);

        settingsDashLabel_1 = new QLabel(settings);
        settingsDashLabel_1->setObjectName(QStringLiteral("settingsDashLabel_1"));
        sizePolicy1.setHeightForWidth(settingsDashLabel_1->sizePolicy().hasHeightForWidth());
        settingsDashLabel_1->setSizePolicy(sizePolicy1);
        settingsDashLabel_1->setFont(font14);

        gridLayout->addWidget(settingsDashLabel_1, 1, 2, 1, 1, Qt::AlignHCenter|Qt::AlignVCenter);

        humidityMarginMaximumEdit = new QLineEdit(settings);
        humidityMarginMaximumEdit->setObjectName(QStringLiteral("humidityMarginMaximumEdit"));
        sizePolicy3.setHeightForWidth(humidityMarginMaximumEdit->sizePolicy().hasHeightForWidth());
        humidityMarginMaximumEdit->setSizePolicy(sizePolicy3);
        humidityMarginMaximumEdit->setMaximumSize(QSize(80, 16777215));
        humidityMarginMaximumEdit->setFont(font14);
        humidityMarginMaximumEdit->setMaxLength(5);

        gridLayout->addWidget(humidityMarginMaximumEdit, 2, 3, 1, 1, Qt::AlignHCenter|Qt::AlignVCenter);

        settingsTemperatureLabel = new QLabel(settings);
        settingsTemperatureLabel->setObjectName(QStringLiteral("settingsTemperatureLabel"));
        sizePolicy1.setHeightForWidth(settingsTemperatureLabel->sizePolicy().hasHeightForWidth());
        settingsTemperatureLabel->setSizePolicy(sizePolicy1);
        settingsTemperatureLabel->setMaximumSize(QSize(16777215, 16777215));
        settingsTemperatureLabel->setFont(font13);

        gridLayout->addWidget(settingsTemperatureLabel, 1, 0, 1, 1, Qt::AlignLeft|Qt::AlignVCenter);

        temperatureMarginMinimumEdit = new QLineEdit(settings);
        temperatureMarginMinimumEdit->setObjectName(QStringLiteral("temperatureMarginMinimumEdit"));
        sizePolicy3.setHeightForWidth(temperatureMarginMinimumEdit->sizePolicy().hasHeightForWidth());
        temperatureMarginMinimumEdit->setSizePolicy(sizePolicy3);
        temperatureMarginMinimumEdit->setMinimumSize(QSize(0, 0));
        temperatureMarginMinimumEdit->setMaximumSize(QSize(80, 16777215));
        temperatureMarginMinimumEdit->setBaseSize(QSize(0, 0));
        temperatureMarginMinimumEdit->setFont(font14);
        temperatureMarginMinimumEdit->setMaxLength(5);

        gridLayout->addWidget(temperatureMarginMinimumEdit, 1, 1, 1, 1, Qt::AlignHCenter|Qt::AlignVCenter);

        settingsMinimumLabel = new QLabel(settings);
        settingsMinimumLabel->setObjectName(QStringLiteral("settingsMinimumLabel"));
        sizePolicy1.setHeightForWidth(settingsMinimumLabel->sizePolicy().hasHeightForWidth());
        settingsMinimumLabel->setSizePolicy(sizePolicy1);
        settingsMinimumLabel->setFont(font13);

        gridLayout->addWidget(settingsMinimumLabel, 0, 1, 1, 1, Qt::AlignHCenter|Qt::AlignVCenter);

        humidityMarginMinimumEdit = new QLineEdit(settings);
        humidityMarginMinimumEdit->setObjectName(QStringLiteral("humidityMarginMinimumEdit"));
        sizePolicy3.setHeightForWidth(humidityMarginMinimumEdit->sizePolicy().hasHeightForWidth());
        humidityMarginMinimumEdit->setSizePolicy(sizePolicy3);
        humidityMarginMinimumEdit->setMaximumSize(QSize(80, 16777215));
        humidityMarginMinimumEdit->setFont(font14);
        humidityMarginMinimumEdit->setMaxLength(5);

        gridLayout->addWidget(humidityMarginMinimumEdit, 2, 1, 1, 1, Qt::AlignHCenter|Qt::AlignVCenter);

        settingsHumidityLabel = new QLabel(settings);
        settingsHumidityLabel->setObjectName(QStringLiteral("settingsHumidityLabel"));
        sizePolicy1.setHeightForWidth(settingsHumidityLabel->sizePolicy().hasHeightForWidth());
        settingsHumidityLabel->setSizePolicy(sizePolicy1);
        settingsHumidityLabel->setFont(font13);

        gridLayout->addWidget(settingsHumidityLabel, 2, 0, 1, 1, Qt::AlignLeft|Qt::AlignVCenter);

        settingsDashLabel_2 = new QLabel(settings);
        settingsDashLabel_2->setObjectName(QStringLiteral("settingsDashLabel_2"));
        sizePolicy1.setHeightForWidth(settingsDashLabel_2->sizePolicy().hasHeightForWidth());
        settingsDashLabel_2->setSizePolicy(sizePolicy1);
        settingsDashLabel_2->setFont(font14);

        gridLayout->addWidget(settingsDashLabel_2, 2, 2, 1, 1, Qt::AlignHCenter|Qt::AlignVCenter);

        percentageLabel_3 = new QLabel(settings);
        percentageLabel_3->setObjectName(QStringLiteral("percentageLabel_3"));
        sizePolicy1.setHeightForWidth(percentageLabel_3->sizePolicy().hasHeightForWidth());
        percentageLabel_3->setSizePolicy(sizePolicy1);
        percentageLabel_3->setFont(font14);

        gridLayout->addWidget(percentageLabel_3, 2, 4, 1, 1, Qt::AlignHCenter|Qt::AlignVCenter);

        temperatureMarginMaximumEdit = new QLineEdit(settings);
        temperatureMarginMaximumEdit->setObjectName(QStringLiteral("temperatureMarginMaximumEdit"));
        sizePolicy3.setHeightForWidth(temperatureMarginMaximumEdit->sizePolicy().hasHeightForWidth());
        temperatureMarginMaximumEdit->setSizePolicy(sizePolicy3);
        temperatureMarginMaximumEdit->setMaximumSize(QSize(80, 16777215));
        temperatureMarginMaximumEdit->setFont(font14);
        temperatureMarginMaximumEdit->setMaxLength(5);

        gridLayout->addWidget(temperatureMarginMaximumEdit, 1, 3, 1, 1, Qt::AlignHCenter|Qt::AlignVCenter);

        settingsMagimumLabel = new QLabel(settings);
        settingsMagimumLabel->setObjectName(QStringLiteral("settingsMagimumLabel"));
        sizePolicy1.setHeightForWidth(settingsMagimumLabel->sizePolicy().hasHeightForWidth());
        settingsMagimumLabel->setSizePolicy(sizePolicy1);
        settingsMagimumLabel->setFont(font13);

        gridLayout->addWidget(settingsMagimumLabel, 0, 3, 1, 1, Qt::AlignHCenter|Qt::AlignVCenter);


        verticalLayout_16->addLayout(gridLayout);

        verticalSpacer_16 = new QSpacerItem(20, 2, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_16->addItem(verticalSpacer_16);

        line_17 = new QFrame(settings);
        line_17->setObjectName(QStringLiteral("line_17"));
        line_17->setFrameShape(QFrame::HLine);
        line_17->setFrameShadow(QFrame::Sunken);

        verticalLayout_16->addWidget(line_17);

        verticalSpacer_9 = new QSpacerItem(20, 2, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_16->addItem(verticalSpacer_9);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        settingsApplyButton = new QPushButton(settings);
        settingsApplyButton->setObjectName(QStringLiteral("settingsApplyButton"));
        sizePolicy3.setHeightForWidth(settingsApplyButton->sizePolicy().hasHeightForWidth());
        settingsApplyButton->setSizePolicy(sizePolicy3);
        settingsApplyButton->setMinimumSize(QSize(200, 50));
        settingsApplyButton->setFont(font5);

        horizontalLayout_3->addWidget(settingsApplyButton, 0, Qt::AlignLeft|Qt::AlignVCenter);

        settingsDefaultButton = new QPushButton(settings);
        settingsDefaultButton->setObjectName(QStringLiteral("settingsDefaultButton"));
        sizePolicy3.setHeightForWidth(settingsDefaultButton->sizePolicy().hasHeightForWidth());
        settingsDefaultButton->setSizePolicy(sizePolicy3);
        settingsDefaultButton->setMinimumSize(QSize(200, 50));
        settingsDefaultButton->setFont(font2);

        horizontalLayout_3->addWidget(settingsDefaultButton, 0, Qt::AlignRight|Qt::AlignVCenter);


        verticalLayout_16->addLayout(horizontalLayout_3);

        verticalSpacer_17 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_16->addItem(verticalSpacer_17);


        horizontalLayout_9->addLayout(verticalLayout_16);

        line = new QFrame(settings);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        horizontalLayout_9->addWidget(line);

        lock = new QPushButton(settings);
        lock->setObjectName(QStringLiteral("lock"));
        sizePolicy2.setHeightForWidth(lock->sizePolicy().hasHeightForWidth());
        lock->setSizePolicy(sizePolicy2);
        QFont font15;
        font15.setPointSize(80);
        lock->setFont(font15);
        lock->setCheckable(true);
        lock->setChecked(false);

        horizontalLayout_9->addWidget(lock);

        line_11 = new QFrame(settings);
        line_11->setObjectName(QStringLiteral("line_11"));
        line_11->setFrameShape(QFrame::VLine);
        line_11->setFrameShadow(QFrame::Sunken);

        horizontalLayout_9->addWidget(line_11);

        verticalLayout_18 = new QVBoxLayout();
        verticalLayout_18->setSpacing(6);
        verticalLayout_18->setObjectName(QStringLiteral("verticalLayout_18"));
        textEdit = new QTextEdit(settings);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        sizePolicy2.setHeightForWidth(textEdit->sizePolicy().hasHeightForWidth());
        textEdit->setSizePolicy(sizePolicy2);
        textEdit->setReadOnly(true);

        verticalLayout_18->addWidget(textEdit);


        horizontalLayout_9->addLayout(verticalLayout_18);


        verticalLayout_17->addLayout(horizontalLayout_9);

        line_10 = new QFrame(settings);
        line_10->setObjectName(QStringLiteral("line_10"));
        line_10->setFrameShape(QFrame::HLine);
        line_10->setFrameShadow(QFrame::Sunken);

        verticalLayout_17->addWidget(line_10);

        pushButtonReturn_5 = new QPushButton(settings);
        pushButtonReturn_5->setObjectName(QStringLiteral("pushButtonReturn_5"));
        sizePolicy3.setHeightForWidth(pushButtonReturn_5->sizePolicy().hasHeightForWidth());
        pushButtonReturn_5->setSizePolicy(sizePolicy3);
        pushButtonReturn_5->setMinimumSize(QSize(200, 50));
        pushButtonReturn_5->setFont(font2);

        verticalLayout_17->addWidget(pushButtonReturn_5, 0, Qt::AlignRight|Qt::AlignVCenter);

        stackedWidget->addWidget(settings);
        help = new QWidget();
        help->setObjectName(QStringLiteral("help"));
        verticalLayout_20 = new QVBoxLayout(help);
        verticalLayout_20->setSpacing(6);
        verticalLayout_20->setContentsMargins(11, 11, 11, 11);
        verticalLayout_20->setObjectName(QStringLiteral("verticalLayout_20"));
        helpLabel = new QLabel(help);
        helpLabel->setObjectName(QStringLiteral("helpLabel"));
        helpLabel->setFont(font3);

        verticalLayout_20->addWidget(helpLabel, 0, Qt::AlignHCenter|Qt::AlignVCenter);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setSpacing(6);
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer_5);

        secretPushButton = new QPushButton(help);
        secretPushButton->setObjectName(QStringLiteral("secretPushButton"));
        QSizePolicy sizePolicy9(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy9.setHorizontalStretch(0);
        sizePolicy9.setVerticalStretch(0);
        sizePolicy9.setHeightForWidth(secretPushButton->sizePolicy().hasHeightForWidth());
        secretPushButton->setSizePolicy(sizePolicy9);
        secretPushButton->setMinimumSize(QSize(225, 225));
        secretPushButton->setMaximumSize(QSize(225, 225));
        QFont font16;
        font16.setPointSize(15);
        secretPushButton->setFont(font16);
        secretPushButton->setCheckable(false);
        secretPushButton->setChecked(false);
        secretPushButton->setFlat(true);

        horizontalLayout_11->addWidget(secretPushButton, 0, Qt::AlignHCenter);

        horizontalSpacer_4 = new QSpacerItem(100, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer_4);


        verticalLayout_20->addLayout(horizontalLayout_11);

        helpTestLabel = new QLabel(help);
        helpTestLabel->setObjectName(QStringLiteral("helpTestLabel"));
        helpTestLabel->setFont(font10);

        verticalLayout_20->addWidget(helpTestLabel, 0, Qt::AlignHCenter|Qt::AlignVCenter);

        verticalSpacer_14 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_20->addItem(verticalSpacer_14);

        pushButtonReturn_6 = new QPushButton(help);
        pushButtonReturn_6->setObjectName(QStringLiteral("pushButtonReturn_6"));
        sizePolicy3.setHeightForWidth(pushButtonReturn_6->sizePolicy().hasHeightForWidth());
        pushButtonReturn_6->setSizePolicy(sizePolicy3);
        pushButtonReturn_6->setMinimumSize(QSize(200, 50));
        pushButtonReturn_6->setFont(font2);
        pushButtonReturn_6->setAutoDefault(false);
        pushButtonReturn_6->setFlat(false);

        verticalLayout_20->addWidget(pushButtonReturn_6, 0, Qt::AlignRight|Qt::AlignVCenter);

        stackedWidget->addWidget(help);

        verticalLayout_7->addWidget(stackedWidget);

        MainWindow->setCentralWidget(centralWidget);
        QWidget::setTabOrder(pushButtonFullness, pushButtonTemperature);
        QWidget::setTabOrder(pushButtonTemperature, pushButtonHumidity);
        QWidget::setTabOrder(pushButtonHumidity, pushButtonSettings);
        QWidget::setTabOrder(pushButtonSettings, pushButtonHelp);
        QWidget::setTabOrder(pushButtonHelp, pushButtonExit);
        QWidget::setTabOrder(pushButtonExit, pushButtonReturn_2);
        QWidget::setTabOrder(pushButtonReturn_2, pushButtonReturn_6);
        QWidget::setTabOrder(pushButtonReturn_6, humidityMarginMaximumEdit);
        QWidget::setTabOrder(humidityMarginMaximumEdit, pushButtonReturn_1);
        QWidget::setTabOrder(pushButtonReturn_1, pushButtonReturn_3);
        QWidget::setTabOrder(pushButtonReturn_3, pushButtonReturn_4);
        QWidget::setTabOrder(pushButtonReturn_4, proximityOpeningCheckBox);
        QWidget::setTabOrder(proximityOpeningCheckBox, languageComboBox);
        QWidget::setTabOrder(languageComboBox, pushButtonStatus);
        QWidget::setTabOrder(pushButtonStatus, temperatureMarginMinimumEdit);
        QWidget::setTabOrder(temperatureMarginMinimumEdit, humidityMarginMinimumEdit);
        QWidget::setTabOrder(humidityMarginMinimumEdit, temperatureMarginMaximumEdit);
        QWidget::setTabOrder(temperatureMarginMaximumEdit, settingsApplyButton);
        QWidget::setTabOrder(settingsApplyButton, settingsDefaultButton);
        QWidget::setTabOrder(settingsDefaultButton, textEdit);
        QWidget::setTabOrder(textEdit, pushButtonReturn_5);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(5);
        pushButtonReturn_6->setDefault(false);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "WALL-\303\206", 0));
        mainScreenImageLabel->setText(QString());
        pushButtonStatus->setText(QApplication::translate("MainWindow", "Status", 0));
        pushButtonFullness->setText(QApplication::translate("MainWindow", "Fullness", 0));
        pushButtonTemperature->setText(QApplication::translate("MainWindow", "Temperature", 0));
        pushButtonHumidity->setText(QApplication::translate("MainWindow", "Humidity", 0));
        pushButtonSettings->setText(QApplication::translate("MainWindow", "Settings", 0));
        pushButtonHelp->setText(QApplication::translate("MainWindow", "Help", 0));
        pushButtonExit->setText(QApplication::translate("MainWindow", "Exit", 0));
        statusLabel_2->setText(QApplication::translate("MainWindow", "Status", 0));
        label_5->setText(QApplication::translate("MainWindow", "Fullness", 0));
        statusFullnessProgressBar->setFormat(QString());
        ledGreen->setText(QString());
        ledYellow->setText(QString());
        ledRed->setText(QString());
        label_6->setText(QApplication::translate("MainWindow", "Status:", 0));
        label_8->setText(QApplication::translate("MainWindow", "GOOD", 0));
        label->setText(QApplication::translate("MainWindow", "Temperature", 0));
        statusTemperatureNumber->setText(QApplication::translate("MainWindow", "15.52", 0));
        celsiusLabel_4->setText(QApplication::translate("MainWindow", "\302\260C", 0));
        label_2->setText(QApplication::translate("MainWindow", "Humidity", 0));
        statusHumidityNumber->setText(QApplication::translate("MainWindow", "88.88", 0));
        percentageLabel_1->setText(QApplication::translate("MainWindow", "%", 0));
        pushButtonReturn_1->setText(QApplication::translate("MainWindow", "Return", 0));
        fullnessLabel->setText(QApplication::translate("MainWindow", "Fullness", 0));
        fullnessBar_1->setFormat(QApplication::translate("MainWindow", "%p%", 0));
        FullnessEstimationLabel_2->setText(QApplication::translate("MainWindow", "Usage", 0));
        FullnessEstimationLabel->setText(QApplication::translate("MainWindow", "Full in app.", 0));
        fullnessEstimationNumber->setText(QApplication::translate("MainWindow", "16", 0));
        fullnessEstimationUnit->setText(QApplication::translate("MainWindow", "hours", 0));
        pushButtonReturn_2->setText(QApplication::translate("MainWindow", "Return", 0));
        temperatureLabel->setText(QApplication::translate("MainWindow", "Temperature", 0));
        temperatureResetButton->setText(QApplication::translate("MainWindow", "Reset", 0));
        label_3->setText(QApplication::translate("MainWindow", "15.52", 0));
        celsiusLabel_2->setText(QApplication::translate("MainWindow", "\302\260C", 0));
        pushButtonReturn_3->setText(QApplication::translate("MainWindow", "Return", 0));
        temperatureLabel_2->setText(QApplication::translate("MainWindow", "Humidity", 0));
        humidityResetButton->setText(QApplication::translate("MainWindow", "Reset", 0));
        label_4->setText(QApplication::translate("MainWindow", "53.26", 0));
        celsiusLabel_5->setText(QApplication::translate("MainWindow", "%", 0));
        pushButtonReturn_4->setText(QApplication::translate("MainWindow", "Return", 0));
        settingsLabel->setText(QApplication::translate("MainWindow", "Settings", 0));
        detectionRangeLabel->setText(QApplication::translate("MainWindow", "Detection range:", 0));
        languageLabel->setText(QApplication::translate("MainWindow", "Language:", 0));
        proximityOpeningCheckBox->setText(QApplication::translate("MainWindow", "Enabled", 0));
        languageComboBox->clear();
        languageComboBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "English", 0)
         << QApplication::translate("MainWindow", "Danish", 0)
        );
        openingSpeedLabel->setText(QApplication::translate("MainWindow", "Opening speed:", 0));
        proximityOpeningLabel->setText(QApplication::translate("MainWindow", "Proximity opening:", 0));
        celsiusLabel_3->setText(QApplication::translate("MainWindow", "\302\260C", 0));
        settingsDashLabel_1->setText(QApplication::translate("MainWindow", "\342\200\223", 0));
        humidityMarginMaximumEdit->setText(QString());
        settingsTemperatureLabel->setText(QApplication::translate("MainWindow", "Temperature:", 0));
        temperatureMarginMinimumEdit->setText(QString());
        settingsMinimumLabel->setText(QApplication::translate("MainWindow", "Min", 0));
        humidityMarginMinimumEdit->setText(QString());
        settingsHumidityLabel->setText(QApplication::translate("MainWindow", "Humidity:", 0));
        settingsDashLabel_2->setText(QApplication::translate("MainWindow", "\342\200\223", 0));
        percentageLabel_3->setText(QApplication::translate("MainWindow", "%", 0));
        temperatureMarginMaximumEdit->setText(QString());
        settingsMagimumLabel->setText(QApplication::translate("MainWindow", "Max", 0));
        settingsApplyButton->setText(QApplication::translate("MainWindow", "Apply", 0));
        settingsDefaultButton->setText(QApplication::translate("MainWindow", "Default", 0));
        lock->setText(QApplication::translate("MainWindow", "LOCK", 0));
        textEdit->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Noto Sans'; font-size:12pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:16pt; font-weight:600;\">ABOUT:</span></p>\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">&quot;Wall-\303\206&quot; was developed by:	Garbage</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\""
                        ">			Rubbish</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">			Litter</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">			Trash</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">			Waste</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">			Junk</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">	</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Special thanks to:		TrashBags</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p"
                        " style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">In memory of:		TrashCanA315</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", 0));
        pushButtonReturn_5->setText(QApplication::translate("MainWindow", "Return", 0));
        helpLabel->setText(QApplication::translate("MainWindow", "Help", 0));
        secretPushButton->setText(QString());
        helpTestLabel->setText(QApplication::translate("MainWindow", "No help available at the moment.", 0));
#ifndef QT_NO_TOOLTIP
        pushButtonReturn_6->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        pushButtonReturn_6->setText(QApplication::translate("MainWindow", "Return", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
