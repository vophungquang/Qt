#ifndef STUDENTDIALOG_H
#define STUDENTDIALOG_H

#include <QDialog>
#include "student.h"

namespace Ui {
class StudentDialog;
}

class Student;
class StudentDialog : public QDialog
{
    Q_OBJECT

public:
    explicit StudentDialog(QWidget *parent = nullptr);
    ~StudentDialog();

    void Show(Student *student);

private slots:
    void on_pushButton_released();

    void on_pushButton_2_released();

private:
    Ui::StudentDialog *ui;

    Student *m_Student;
};

#endif // STUDENTDIALOG_H
