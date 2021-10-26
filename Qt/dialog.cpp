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
//    ui->label->setText("Hello");
//    ui->pushButton->hide();
}


void Dialog::on_lineEdit_editingFinished()
{
    ui->label->setText(ui->lineEdit->text());
}


void Dialog::on_pushButton_released()
{
    QString text;
    QString s="You like ";
    if(ui->cat->isChecked())
    {
        if(!text.isEmpty())
            text+=" and Cat";
        else
            text+="Cat";
    }
    if(ui->dog->isChecked())
    {
        if(!text.isEmpty())
            text+=" and Dog";
        else
            text+="Dog";
    }
    if(ui->mouse->isChecked())
    {
        if(!text.isEmpty())
            text+=" and Hamster";
        else
            text+="Hamster";
    }


    ui->label->setText(s+text);
}

