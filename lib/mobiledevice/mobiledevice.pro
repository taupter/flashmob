#-------------------------------------------------
#
# Project created by QtCreator 2014-08-06T15:55:45
#
#-------------------------------------------------

TARGET = mobiledevice
TEMPLATE = lib

DEFINES += MOBILEDEVICE_LIBRARY

SOURCES += mobiledevice.cpp

HEADERS += mobiledevice.h\
        mobiledevice_global.h \
    mobiledeviceplugin_interface.h

unix {
    target.path = /usr/lib
    INSTALLS += target
}
