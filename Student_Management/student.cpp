#include "student.h"

Student::Student(QString name)
    :   QListWidgetItem(name)
{

}
Student::Student(QString name, QString dob, QString classname)
    :   QListWidgetItem(name),
        m_DOB(dob),
        m_class(classname)
{

}

Student::~Student()
{

}
