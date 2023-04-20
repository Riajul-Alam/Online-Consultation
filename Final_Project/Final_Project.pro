QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# The following define makes your compiler emit warnings if you use
# any Qt feature that has been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    appoinment.cpp \
    consultation.cpp \
    doctor_mainwindow.cpp \
    main.cpp \
    mainwindow.cpp \
    menu.cpp \
    second_page.cpp \
    secondpage.cpp

HEADERS += \
    appoinment.h \
    consultation.h \
    doctor_mainwindow.h \
    mainwindow.h \
    menu.h \
    second_page.h \
    secondpage.h

FORMS += \
    appoinment.ui \
    consultation.ui \
    doctor_mainwindow.ui \
    mainwindow.ui \
    menu.ui \
    second_page.ui \
    secondpage.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

SUBDIRS += \
    Registration.pro

DISTFILES += \
    Registration.pro.user \
    login.jpeg \
    patient_details.db

RESOURCES += \
    resrce.qrc
