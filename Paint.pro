#-------------------------------------------------
#
# Project created by QtCreator 2015-12-18T21:29:46
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Paint
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    maintoolbar.cpp \
    tabaccueil.cpp \
    graphicsview.cpp \
    centralwidget.cpp

HEADERS  += mainwindow.h \
    maintoolbar.h \
    tabaccueil.h \
    graphicsview.h \
    centralwidget.h

FORMS    += mainwindow.ui \
    maintoolbar.ui \
    tabaccueil.ui
