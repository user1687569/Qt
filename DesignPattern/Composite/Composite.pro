TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    company.cpp \
    hrdepartment.cpp \
    rddepartment.cpp

HEADERS += \
    component.h \
    company.h \
    hrdepartment.h \
    rddepartment.h
