TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    blogg.cpp \
    observer.cpp

HEADERS += \
    observer.h \
    blogg.h
