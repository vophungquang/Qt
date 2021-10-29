#ifndef STUDENT_MANAGEMENT_H
#define STUDENT_MANAGEMENT_H

#include <QWidget>
#include "student.h"
#include <QString>
#include <QVector>

QT_BEGIN_NAMESPACE
namespace Ui { class Student_Management; }
QT_END_NAMESPACE

class QListWidgetItem;

class Student_Management : public QWidget
{
    Q_OBJECT

public:
    Student_Management(QWidget *parent = nullptr);
    ~Student_Management();

    void AddStudent(Student *student);
    void AddStudent(QString name);
    void AddStudent(QString name, QString dob, QString classname);

    void RemoveStudent(Student *student);

private slots:
    void on_listWidget_itemDoubleClicked(QListWidgetItem *item);

    void on_btn_add_clicked();

    void on_btn_sub_clicked();

private:
    Ui::Student_Management *ui;

    QVector<Student*> v_Students;
};
#endif // STUDENT_MANAGEMENT_H
