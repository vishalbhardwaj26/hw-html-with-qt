#ifndef DBSERVER_H
#define DBSERVER_H

#include <QObject>
#include <QList>
#include <person.h>

QT_BEGIN_NAMESPACE
class DBServer: public QObject
{

    Q_OBJECT

Q_PROPERTY(QStringList userList READ userList NOTIFY userListChanged)

public:    
    explicit DBServer(QObject *parent = 0);
    virtual ~DBServer();

    Q_INVOKABLE bool addPerson(const QString& fname, const QString& lname);

    QStringList userList() const;


signals:
   void userListChanged(const QString& fname, const QString& lname);



private:
     QStringList m_userList;

};

QT_END_NAMESPACE
#endif // DBSERVER_H
