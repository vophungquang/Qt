#ifndef STUDENT_H
#define STUDENT_H

#include <QString>
#include <QListWidgetItem>

class Student: public QListWidgetItem
{
public:
    Student(){}
    Student(QString name);
    Student(QString name, QString dob, QString classname);
    ~Student();

    void SetName(QString name);
    void SetDOB(QString dob);
    void SetClass(QString classname);

    QString GetName() const;
    QString GetDOB() const;
    QString GetClass() const;

private:
    QString m_DOB;
    QString m_class;
};

inline void Student::SetName(QString name)
{
    QListWidgetItem::setText(name);
}
inline void Student::SetDOB(QString dob)
{
    m_DOB=dob;
}
inline void Student::SetClass(QString classname)
{
    m_class=classname;
}

inline QString Student::GetName() const
{
    return QListWidgetItem::text();
}
inline QString Student::GetDOB() const
{
    return m_DOB;
}
inline QString Student::GetClass() const
{
    return m_class;
}
#endif // STUDENT_H
