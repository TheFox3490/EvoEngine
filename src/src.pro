TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        Rstring.cpp \
        Rvector.cpp \
        main.cpp

HEADERS += \
    Rstring.h \
    Rvar.h \
    Rvector.h \
    rtypes.h
