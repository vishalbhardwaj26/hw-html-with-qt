#ifndef PERSON_H
#define PERSON_H
#include <qstring.h>

class Person
{


public:
    Person();
    Person(QString fName, QString lName);
    QString firstName;
    QString lastName;

};

#endif // PERSON_H
