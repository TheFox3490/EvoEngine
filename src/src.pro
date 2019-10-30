TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        Rstring.cpp \
<<<<<<< HEAD
        Rvector.cpp \
=======
        Rvar.cpp \
>>>>>>> 0.1_Alpha_1
        main.cpp

HEADERS += \
    Rstring.h \
    Rvar.h \
    Rvector.h \
    rtypes.h
