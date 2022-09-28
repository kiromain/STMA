QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    main.cpp \
    mainwindow.cpp \
    stdialog.cpp \
    stlog.cpp \
    stwindow.cpp \
    tchlog.cpp \
    tchwindow.cpp \
    tchwindow0.cpp

HEADERS += \
    mainwindow.h \
    stdialog.h \
    stlog.h \
    stwindow.h \
    tchlog.h \
    tchwindow.h \
    tchwindow0.h

FORMS += \
    mainwindow.ui \
    stdialog.ui \
    stlog.ui \
    stwindow.ui \
    tchlog.ui \
    tchwindow.ui \
    tchwindow0.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    pictures.qrc
