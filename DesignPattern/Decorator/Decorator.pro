TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    filestream.cpp \
    networkstream.cpp \
    decoratorstream.cpp

HEADERS += \
    stream.h \
    filestream.h \
    networkstream.h \
    decoratorstream.h
