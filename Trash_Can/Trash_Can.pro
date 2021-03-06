#-------------------------------------------------
#
# Project created by QtCreator 2017-04-09T20:02:05
#
#-------------------------------------------------

QT += core gui charts serialport printsupport widgets

TARGET = Trash_Can
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += main.cpp\
    mainwindow.cpp \
    serialconnection.cpp \
    clickablewidget.cpp \
    qcustomplot.cpp \
    timethread.cpp \
    trashsettings.cpp \
    confirmdialog.cpp \
    qcgaugewidget.cpp \
    myplot.cpp


HEADERS  += mainwindow.h \
    serialconnection.h \
    clickablewidget.h \
    qcustomplot.h \
    timethread.h \
    trashsettings.h \
    confirmdialog.h \
    qcgaugewidget.h \
    myplot.h


FORMS    += mainwindow.ui \
    confirmdialog.ui

RESOURCES += \
    graphics.qrc
