TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    system.cpp \
    WaveFunctions/wavefunction.cpp \
    initialize_electrons.cpp \
    WaveFunctions/doublewell.cpp

LIBS += -llapack -lblas -larmadillo

HEADERS += \
    catch.h \
    system.h \
    WaveFunctions/wavefunction.h \
    WaveFunctions/doublewell.h

