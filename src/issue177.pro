# issue177.pro
 
TARGET = issue177
TEMPLATE = app

QT += core

CONFIG += console
CONFIG -= app_bundle

DEFINES += QT_DEPRECATED_WARNINGS

##########################################################################
# NOTE: You can fix value of QXlsx path of source code.
QXLSX_PARENTPATH=../../QXlsx/QXlsx/
QXLSX_HEADERPATH=../../QXlsx/QXlsx/header/
QXLSX_SOURCEPATH=../../QXlsx/QXlsx/source/
include(../../QXlsx/QXlsx/QXlsx.pri)

SOURCES += \
	main.cpp

RESOURCES += \
	test.qrc
	
