#-------------------------------------------------
#
# Project created by QtCreator 2016-09-22T13:00:57
#
#-------------------------------------------------

QT       -= gui

TARGET = plugin2
TEMPLATE = lib

DEFINES += BUILD_PLUGIN

SOURCES += \
    plugin2.cpp

HEADERS += \
    plugin2.h

INCLUDEPATH += ../inc

unix {
    target.path = /usr/lib
    INSTALLS += target
}
