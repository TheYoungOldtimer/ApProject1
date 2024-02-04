QT       += core gui
QT       += network
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
    addmemtoprojwin.cpp \
    addmemtoteamwin.cpp \
    client3.cpp \
    editorganwindow.cpp \
    login.cpp \
    main.cpp \
    mainwindowapp.cpp \
    member.cpp \
    membermain.cpp \
    memberrolewindow.cpp \
    newmemberinorgan.cpp \
    neworganwindow.cpp \
    newprojectwin.cpp \
    newteamwindow.cpp \
    organ.cpp \
    project.cpp \
    projectedit.cpp \
    server1.cpp \
    task.cpp \
    tasksetting.cpp \
    tasksettingedit.cpp \
    team.cpp \
    teamedit.cpp

HEADERS += \
    addmemtoprojwin.h \
    addmemtoteamwin.h \
    client3.h \
    editorganwindow.h \
    login.h \
    mainwindowapp.h \
    member.h \
    membermain.h \
    memberrolewindow.h \
    newmemberinorgan.h \
    neworganwindow.h \
    newprojectwin.h \
    newteamwindow.h \
    organ.h \
    project.h \
    projectedit.h \
    server1.h \
    task.h \
    tasksetting.h \
    tasksettingedit.h \
    team.h \
    teamedit.h

FORMS += \
    addmemtoprojwin.ui \
    addmemtoteamwin.ui \
    client3.ui \
    editorganwindow.ui \
    login.ui \
    mainwindowapp.ui \
    membermain.ui \
    memberrolewindow.ui \
    newmemberinorgan.ui \
    neworganwindow.ui \
    newprojectwin.ui \
    newteamwindow.ui \
    projectedit.ui \
    server1.ui \
    tasksetting.ui \
    tasksettingedit.ui \
    teamedit.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
