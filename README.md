# HTMLWithQt
Experimenting rendering HTML/JS pages in Qt and "JS-C++" communication in Qt

**To Run this repo:**
* Open HTMLQtApp.pro file with Qt Creator
* Configure project setting tab on left side panel

<img src="/images/configure.JPG?raw=true" width="400" >
<!--
 ![](/images/configure.JPG?raw=true "")
 -->
* Just check out that build dir should on on source level (parallel)

<img src="/images/build.JPG?raw=true" width="400" >
* Open **main.qml** under Resources and correct the url path according to your directory structure. Sorry that i have made it hard coded as of now.

<img src="/images/hardcodedpath.JPG?raw=true" width="400" >

**About App**
* Initializes a WebSocket connection to the server.
* Use Qwebchannel to register a particular object on server, so that it would be exposed to HTML/JS
* Client JavaScript implementation of QWebChannel (qwebchannel.js ), like connecting to signals, calling slots, and handling property changes on the server.
* Used WebEngineView to render HTML and JS content as app

Work flow:

<img src="/images/app.jpg?raw=true" width="400" >
<!---
![](/images/app.jpg?raw=true ""){:height="36px" width="36px"}
-->
GUI

<img src="/images/gui.png?raw=true" width="300" >
<!--![](/images/gui.png?raw=true "")-->

**More study**
* QtWebkit module of Qt made it possible to load HTML5 GUI in Qt and interaction of GUI elements with code behind in C++ using QtWebKit bridge in previous releases (based on WebKit rendering engine).
 * From Qt 5.3 QtWebkit is now moved in different direction along with "chromium" based browser and highly optimized "blink" as rendering engine, called as QtWebEngine (or QtWebKit 2.0).
* QWebEngineView can be treated as a browser to host the HTML page.
* QWebChannel provides a channel to communicate between C++ and JS code. It provides a mechanism to make your C++ code communicates with HTML JS and vice versa. 

#### QtWebEngine
* Integrates chromium's fast moving web capabilities into Qt.
* Not just a port of the core HTML/CSS rendering engine, it is the entire Chromium platform

#### QWebChannel 
* QWebChannel provides a bridge between HTML/JS and C++.
* Underlying transport mechanism, as a way to expose QObject to remote HTML/JS client.
* Publishing a QObject derived object to a QWebChannel, and using the qwebchannel.js on the HTML side, one can transparently access properties and public slots and methods of theQObject.
* Asynchronous API, makes it possible to talk to any HTML client, which could run on a local or even remote machine.
* Limitation:  A current limitation is that objects must be registered before any client is initialized.
 * So We should check to expose dynamically created objects, we have not yet.
 
 
 [Qt official blog talking about further direction with HTML technology](http://blog.qt.io/blog/2013/09/12/introducing-the-qt-webengine/)
