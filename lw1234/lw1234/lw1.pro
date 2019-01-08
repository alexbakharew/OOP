TEMPLATE = app
CONFIG += console c++17
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    triangle.cpp \
    eq_triangle.cpp \
    hash_table.cpp

HEADERS += \
    figure.h \
    triangle.h \
    eq_triangle.h
