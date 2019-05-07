#-------------------------------------------------
#
# Project created by QtCreator 2014-03-27T21:18:35
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = example
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    MyGlobalShortCut/MyWinEventFilter.cpp \
    MyGlobalShortCut/MyGlobalShortCut.cpp

HEADERS  += mainwindow.h \
    MyGlobalShortCut/MyWinEventFilter.h \
    MyGlobalShortCut/MyGlobalShortCut.h

FORMS    += mainwindow.ui
