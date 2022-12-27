TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    visitor.cpp \
    element.cpp

HEADERS += \
    visitor.h \
    element.h
