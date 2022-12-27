TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    context.cpp \
    interpret.cpp

HEADERS += \
    context.h \
    interpret.h
