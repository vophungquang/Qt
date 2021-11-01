#include "studentdialog.h"
#include "ui_studentdialog.h"
#include "student.h"

StudentDialog::StudentDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::StudentDialog)
{
    ui->setupUi(this);

    setWindowTitle("Information Student");
}

void StudentDialog::Show(Student *student)
{
    ui->edt_name->setText(student->GetName());
    ui->edt_dob->setText(student->GetDOB());
    ui->edt_classname->setText(student->GetClass());

    m_Student = student;
    show();
}
StudentDialog::~StudentDialog()
{
    delete ui;
}

void StudentDialog::on_pushButton_released()
{
    m_Student->SetName(ui->edt_name->text());
    m_Student->SetDOB(ui->edt_dob->text());
    m_Student->SetClass(ui->edt_classname->text());

    hide();
}


void StudentDialog::on_pushButton_2_released()
{
    hide();
}

