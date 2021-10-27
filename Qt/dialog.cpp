#include "dialog.h"
#include "ui_dialog.h"
#include <QListWidgetItem>

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);

    ui->listWidget->addItem("Monday");
    ui->listWidget->addItem("Tuesday");
    ui->listWidget->addItem("Wednesday");
    ui->listWidget->addItem("Thursday");
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_pushButton_released()
{
//    ui->label->setText("Bạn chọn "+ui->comboBox->currentText());
}


void Dialog::on_listWidget_itemDoubleClicked(QListWidgetItem *item)
{
    ui->label->setText(item->text());
}

