/********************************************************************************
** Form generated from reading UI file 'student_management.ui'
**
** Created by: Qt User Interface Compiler version 5.12.11
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STUDENT_MANAGEMENT_H
#define UI_STUDENT_MANAGEMENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Student_Management
{
public:

    void setupUi(QWidget *Student_Management)
    {
        if (Student_Management->objectName().isEmpty())
            Student_Management->setObjectName(QString::fromUtf8("Student_Management"));
        Student_Management->resize(800, 600);

        retranslateUi(Student_Management);

        QMetaObject::connectSlotsByName(Student_Management);
    } // setupUi

    void retranslateUi(QWidget *Student_Management)
    {
        Student_Management->setWindowTitle(QApplication::translate("Student_Management", "Student_Management", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Student_Management: public Ui_Student_Management {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STUDENT_MANAGEMENT_H
