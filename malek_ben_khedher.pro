QT       += core gui sql network charts

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
    add_publicite.cpp \
    add_sponsor.cpp \
    connexion.cpp \
    gestion_malek.cpp \
    main.cpp \
    mainwindow.cpp \
    publicite.cpp \
    smtp.cpp \
    sponsor.cpp \
    stat_publicite.cpp

HEADERS += \
    add_publicite.h \
    add_sponsor.h \
    connexion.h \
    gestion_malek.h \
    mainwindow.h \
    publicite.h \
    smtp.h \
    sponsor.h \
    stat_publicite.h

FORMS += \
    add_publicite.ui \
    add_sponsor.ui \
    gestion_malek.ui \
    mainwindow.ui \
    stat_publicite.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    Resources.qrc
