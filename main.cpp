#include "QtWebChannel/qwebchannel.h"
#include <QApplication>
#include <QQmlApplicationEngine>
#include <QtWebSockets/QWebSocketServer>

#include <QCoreApplication>
#include <QUrl>
#include <QDebug>
#include <QDesktopServices>


#include <QGuiApplication>
#include <qtwebengineglobal.h>

#include<websockettransport.h>
#include<websocketclientwrapper.h>


#include <dbserver.h>

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);
    QtWebEngine::initialize();





    QWebSocketServer server(QStringLiteral("QWebChannel Standalone Example Server"),
                            QWebSocketServer::NonSecureMode);
    if (!server.listen(QHostAddress::LocalHost, 12345)) {
        qFatal("Failed to open web socket server.");
        return 1;
    }

    // wrap WebSocket clients in QWebChannelAbstractTransport objects
    WebSocketClientWrapper clientWrapper(&server);

    // setup the channel
    QWebChannel channel;
    QObject::connect(&clientWrapper, &WebSocketClientWrapper::clientConnected,
                     &channel, &QWebChannel::connectTo);

    // setup the dialog and publish it to the QWebChannel
    DBServer* dbserver = new DBServer(&app);
    channel.registerObject("dbserver", dbserver);


    //Open in browser
    //QUrl url = QUrl::fromLocalFile("C:/Users/vbhardwa/Documents/QT/HTMLQtApp/index.html");//(BUILD_DIR "/index.html");
    //QDesktopServices::openUrl(url);

    //Open in webview
    QQmlApplicationEngine engine;
    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));

    return app.exec();
}
