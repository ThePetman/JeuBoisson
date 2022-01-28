QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    environnement/carte.cpp \
    environnement/joueur.cpp \
    environnement/paquet.cpp \
    environnement/plateau.cpp \
    main.cpp \
    vues/gamewindow.cpp \
    vues/mainwindow.cpp \
    miniJeux/famillemot.cpp \
    miniJeux/rapidite.cpp \
    miniJeux/vitessemot.cpp

HEADERS += \
    environnement/carte.h \
    environnement/joueur.h \
    environnement/paquet.h \
    environnement/plateau.h \
    vues/gamewindow.h \
    vues/mainwindow.h \
    miniJeux/famillemot.h \
    miniJeux/rapidite.h \
    miniJeux/vitessemot.h

FORMS += \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
