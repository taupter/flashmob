#-------------------------------------------------
#
# Project created by QtCreator 2014-08-06T16:16:06
#
#-------------------------------------------------

TARGET = mobdev_rkandroid
TEMPLATE = lib
CONFIG += plugin

DEFINES += MOBDEV_RKANDROID_LIBRARY

SOURCES += moddev_rkandroid.cpp

HEADERS += moddev_rkandroid.h\
        mobdev_rkandroid_global.h

OTHER_FILES += mobdev_rkandroid.json

unix {
    target.path = /usr/lib
    INSTALLS += target
}
