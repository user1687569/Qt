TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
    receiver.cpp \
    command.cpp \
    invoker.cpp \
    main.cpp

HEADERS += \
    receiver.h \
    command.h \
    invoker.h
