#-------------------------------------------------
#
# Project created by QtCreator 2016-01-31T12:02:20
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = button_control_led
target.files = button_control_led
target.path = /root
INSTALLS = target
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    GPIO/GPIOConst.cpp \
    GPIO/GPIOManager.cpp

HEADERS  += mainwindow.h \
    GPIO/GPIOConst.h \
    GPIO/GPIOManager.h

FORMS    += mainwindow.ui

LIBS+=-L/home/boon/qt-bbb/tslib/lib -lts
