#include "student_management.h"
#include "ui_student_management.h"
#include "student.h"
#include <QListWidgetItem>

Student_Management::Student_Management(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Student_Management)
{
    ui->setupUi(this);

    Student *student = new Student();
    student->SetName("Võ Phụng Quang");
    student->SetDOB("26/03/1999");
    student->SetClass("Class A");

    ui->listWidget->addItem((QListWidgetItem*) student);
}

Student_Management::~Student_Management()
{
    delete ui;
}


void Student_Management::on_listWidget_itemDoubleClicked(QListWidgetItem *item)
{
    Student *student= (Student*) item;
    ui->STname->setText(student->GetName());
    ui->STdob->setText(student->GetDOB());
    ui->STclassname->setText(student->GetClass());
}

