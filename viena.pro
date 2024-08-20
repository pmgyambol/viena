QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    main.cpp \
    mainwin/mainwindow.cpp \
    newuser/newuserdialog.cpp \
    sql/sqlitedb.cpp \
    listuser/listuser.cpp

HEADERS += \
    mainwin/mainwindow.h \
    newuser/newuserdialog.h \
    sql/sqlitedb.h \
    listuser/listuser.h

FORMS += \
    mainwin/mainwindow.ui \
    newuser/newuserdialog.ui \
    listuser/listuser.ui

OBJECTS_DIR = tmp
MOC_DIR     = tmp
UI_DIR      = tmp

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
