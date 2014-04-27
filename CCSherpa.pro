#-------------------------------------------------
#
# Project created by QtCreator 2014-04-27T22:53:25
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = CCSherpa
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    sfr_list.cpp \
    sfr_object.cpp

HEADERS  += mainwindow.h \
    sfr_list.h \
    sfr_object.h

FORMS    += mainwindow.ui
