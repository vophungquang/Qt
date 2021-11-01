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
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Student_Management
{
public:
    QListWidget *listWidget;
    QPushButton *btn_add;
    QPushButton *btn_sub;
    QLabel *label;

    void setupUi(QWidget *Student_Management)
    {
        if (Student_Management->objectName().isEmpty())
            Student_Management->setObjectName(QString::fromUtf8("Student_Management"));
        Student_Management->resize(800, 600);
        listWidget = new QListWidget(Student_Management);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(110, 140, 541, 261));
        btn_add = new QPushButton(Student_Management);
        btn_add->setObjectName(QString::fromUtf8("btn_add"));
        btn_add->setGeometry(QRect(550, 90, 41, 41));
        btn_sub = new QPushButton(Student_Management);
        btn_sub->setObjectName(QString::fromUtf8("btn_sub"));
        btn_sub->setGeometry(QRect(600, 90, 41, 41));
        label = new QLabel(Student_Management);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(320, 40, 341, 31));

        retranslateUi(Student_Management);

        QMetaObject::connectSlotsByName(Student_Management);
    } // setupUi

    void retranslateUi(QWidget *Student_Management)
    {
        Student_Management->setWindowTitle(QApplication::translate("Student_Management", "Student_Management", nullptr));
        btn_add->setText(QApplication::translate("Student_Management", "+", nullptr));
        btn_sub->setText(QApplication::translate("Student_Management", "-", nullptr));
        label->setText(QApplication::translate("Student_Management", "Student Management", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Student_Management: public Ui_Student_Management {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STUDENT_MANAGEMENT_H
