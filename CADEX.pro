TEMPLATE = app
CONFIG += console c++17
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        circle.cpp \
        ellipse.cpp \
        helix.cpp \
        main.cpp

HEADERS += \
    circle.h \
    curve.h \
    ellipse.h \
    helix.h
