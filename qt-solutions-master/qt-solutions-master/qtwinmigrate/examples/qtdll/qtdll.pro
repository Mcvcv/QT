QT       += core gui
QT += core sql


TEMPLATE     = lib
CONFIG	    += dll
SOURCES	     = main.cpp \
               formw.cpp

TARGET	     = qtdialog
DLLDESTDIR   = $$[QT_INSTALL_PREFIX]/bin

include(../../src/qtwinmigrate.pri)

FORMS += \
    formw.ui

HEADERS += \
    formw.h
