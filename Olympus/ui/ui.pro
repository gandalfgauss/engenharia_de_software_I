QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    ../src/lib/countryImpl.cpp \
    ../src/lib/loginImpl.cpp \
    ../src/lib/medalImpl.cpp \
    ../src/lib/modalityImpl.cpp \
    ../src/lib/systemImpl.cpp \
    countryadm.cpp \
    countryadmupdatescreen.cpp \
    countryusermodalitymedalscreen.cpp \
    countryusermodalityscreen.cpp \
    countryuserscreen.cpp \
    loginscreen.cpp \
    main.cpp \
    mainwindow.cpp \
    medaladmupdatescreen.cpp \
    modalityadmscreen.cpp \
    modalityuserscreen.cpp \
    utility.cpp

HEADERS += \
    ../src/lib/country.h \
    ../src/lib/countryImpl.h \
    ../src/lib/login.h \
    ../src/lib/loginImpl.h \
    ../src/lib/medal.h \
    ../src/lib/medalImpl.h \
    ../src/lib/modality.h \
    ../src/lib/modalityImpl.h \
    ../src/lib/system.h \
    ../src/lib/systemImpl.h \
    countryadm.h \
    countryadmupdatescreen.h \
    countryusermodalitymedalscreen.h \
    countryusermodalityscreen.h \
    countryuserscreen.h \
    loginscreen.h \
    mainwindow.h \
    medaladmupdatescreen.h \
    modalityadmscreen.h \
    modalityuserscreen.h \
    utility.h

FORMS += \
    countryadm.ui \
    countryadmupdatescreen.ui \
    countryusermodalitymedalscreen.ui \
    countryusermodalityscreen.ui \
    countryuserscreen.ui \
    loginscreen.ui \
    mainwindow.ui \
    medaladmupdatescreen.ui \
    modalityadmscreen.ui \
    modalityuserscreen.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
