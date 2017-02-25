TEMPLATE = app

TARGET = chatserver

QT += qml quick widgets
QT += core websockets webchannel
QT += webengine

CONFIG += c++11

SOURCES += main.cpp \
    person.cpp \
    dbserver.cpp \
    websocketclientwrapper.cpp \
    websockettransport.cpp

DEFINES += "BUILD_DIR=\"\\\""$$OUT_PWD"\\\"\""

exampleassets.files += \
    index.html
exampleassets.path = C:/Users/vbhardwa/Documents/QT/HTMLQtApp
include(C:/Qt/Examples/Qt-5.7/webchannel/exampleassets.pri)

RESOURCES += qml.qrc

# Additional import path used to resolve QML modules in Qt Creator's code model
QML_IMPORT_PATH =

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

HEADERS += \
    person.h \
    dbserver.h \
    websocketclientwrapper.h \
    websockettransport.h

DISTFILES += \
    index.html \
    ../../../../../Qt/Examples/Qt-5.7/webchannel/exampleassets.pri
