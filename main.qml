import QtQuick 2.7
import QtQuick.Controls 1.5
import QtQuick.Dialogs 1.2
import QtQuick.Window 2.0
import QtQuick.Layouts 1.1


import QtWebEngine 1.0

Window {
    width: 1024
    height: 750
    visible: true
    title: "My Application"



    WebEngineView {

        anchors.fill: parent
        url: "C:/Users/vbhardwa/Documents/QT/HTMLWithQt/index.html"
    }

}
//ApplicationWindow {
//    visible: true
//    width: 640
//    height: 480
//    title: qsTr("Hello World")


//}
