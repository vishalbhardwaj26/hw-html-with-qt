#include "dbserver.h"

#include <QtCore/QDebug>


QT_BEGIN_NAMESPACE

DBServer::DBServer(QObject *parent)
    : QObject(parent)
{
    m_userList = QStringList() << QString("First") << QString("Second");

}

DBServer::~DBServer()
{}


bool DBServer::addPerson(const QString& fname, const QString& lname)
{
    printf("About to Add");
    Person p(fname,lname);
    m_userList.append(p.firstName);

    emit userListChanged(p.firstName,p.lastName);
   // emit userListChanged(p.firstName);
    return true;

}


QStringList DBServer::userList() const
{
    return m_userList;
}

QT_END_NAMESPACE
