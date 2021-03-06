#-------------------------------------------------
#
# Project created by QtCreator 2014-01-21T18:47:59
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = TudiMaps
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    edititemdockwidget.cpp \
    sceneviewdockwidget.cpp \
    imageprocessor.cpp

HEADERS  += mainwindow.h \
    graphicsview.h \
    edititemdockwidget.h \
    sceneviewdockwidget.h \
    imageprocessor.h

FORMS    += mainwindow.ui \
    edititemdockwidget.ui \
    sceneviewdockwidget.ui

win32: INCLUDEPATH += C:\opencv248\build\install\include
else:unix: INCLUDEPATH += /usr/local/include

win32: LIBS += C:\\opencv248\\build\\lib\\libopencv_core248.dll.a \
                                                C:\\opencv248\\build\\lib\\libopencv_highgui248.dll.a \
                                                C:\\opencv248\\build\\lib\\libopencv_imgproc248.dll.a \
                                                C:\\opencv248\\build\\lib\\libopencv_photo248.dll.a

else:unix:LIBS += -L/usr/local/lib \
    -lopencv_core \
    -lopencv_imgproc \
    -lopencv_highgui \
    -lopencv_photo \


