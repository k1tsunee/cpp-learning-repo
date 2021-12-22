#-------------------------------------------------
#
# Project created by QtCreator 2021-12-22T11:35:19
#
#-------------------------------------------------

QT       += core

QT       -= gui

TARGET = dllTestExe
CONFIG   += console
CONFIG   -= app_bundle

TEMPLATE = app


SOURCES += main.cpp

DEPENDPATH += ../dllTest
INCLUDEPATH += ../dllTest

LIBS += -L../dllTest -ldllTest
