#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}


void Dialog::on_pushButton_clicked()
{
    ui->label->setText("Hello");
    ui->pushButton->hide();
}


void Dialog::on_lineEdit_editingFinished()
{
    ui->label->setText(ui->lineEdit->text());
}

