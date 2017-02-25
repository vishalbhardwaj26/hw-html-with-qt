# HTMLWithQt
Experimenting rendering HTML pages and JS communication in Qt

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
