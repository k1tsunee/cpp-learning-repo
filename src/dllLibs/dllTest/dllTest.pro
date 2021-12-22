#-------------------------------------------------
#
# Project created by QtCreator 2021-12-22T11:45:15
#
#-------------------------------------------------

QT       -= gui

TARGET = dllTest
TEMPLATE = lib

DEFINES += DLLTEST_LIBRARY

SOURCES += dlltest.cpp

HEADERS += dlltest.h\
        dlltest_global.h

unix {
    target.path = /usr/lib
    INSTALLS += target
}
