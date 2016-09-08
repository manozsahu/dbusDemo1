#-------------------------------------------------
#
# Project created by QtCreator 2015-07-30T10:47:53
#
#-------------------------------------------------

QT       += core gui
QT       += dbus
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = dbustest1
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
        test_interface.cpp \
        test_adap.cpp

HEADERS  += mainwindow.h \
            test_interface.h \
            test_adap.h

FORMS    += mainwindow.ui
