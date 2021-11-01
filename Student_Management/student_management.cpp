#include "student_management.h"
#include "ui_student_management.h"
#include "student.h"
#include "studentdialog.h"
#include <QListWidgetItem>

Student_Management::Student_Management(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Student_Management)
{
    ui->setupUi(this);

   m_StudentDialog = new StudentDialog;

   m_StudentDialog->show();
}

void Student_Management::AddStudent(Student *student)
{
    ui->listWidget->addItem((QListWidgetItem*) student);
    v_Students.push_back(student);
}

void Student_Management::AddStudent(QString name)
{
   Student *student = new Student(name);
   AddStudent(student);
}

void Student_Management::AddStudent(QString name, QString dob, QString classname)
{
   Student *student = new Student(name,dob,classname);
   AddStudent(student);
}

void Student_Management::RemoveStudent(Student *student)
{
    ui->listWidget->removeItemWidget((QListWidgetItem*) student);

    for(int i=0;i<v_Students.size();i++)
    {
        if(v_Students[i]==student)
        {
            v_Students.remove(i);
            delete  student;
        }
    }
}


void Student_Management::on_listWidget_itemDoubleClicked(QListWidgetItem *item)
{
    m_StudentDialog->Show((Student*) item);
}

Student_Management::~Student_Management()
{
    for(int i=0;i<v_Students.size();i++)
    {
        RemoveStudent(v_Students[i]);
    }
    delete ui;

    delete m_StudentDialog;
}


void Student_Management::on_btn_add_clicked()
{
    AddStudent("New Student");
}


void Student_Management::on_btn_sub_clicked()
{
    RemoveStudent((Student*) ui->listWidget->currentItem());
}

