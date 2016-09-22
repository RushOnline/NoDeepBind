#-------------------------------------------------
#
# Project created by QtCreator 2016-09-22T13:00:57
#
#-------------------------------------------------

QT       -= gui

TARGET = plugin1
TEMPLATE = lib

DEFINES += BUILD_PLUGIN

SOURCES += \
    plugin1.cpp

HEADERS += \
    plugin1.h

INCLUDEPATH += ../inc

unix {
    target.path = /usr/lib
    INSTALLS += target
}
