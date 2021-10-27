#include "quangbrowser.h"
#include "ui_quangbrowser.h"
#include <QMessageBox>

QuangBrowser::QuangBrowser(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::QuangBrowser)
{
    ui->setupUi(this);
}

QuangBrowser::~QuangBrowser()
{
    delete ui;
}

void QuangBrowser::on_addressEdit_returnPressed()
{
    ui->webView->load(ui->addressEdit->text());
}


void QuangBrowser::on_backButton_clicked()
{
    ui->webView->back();
}


void QuangBrowser::on_forwardButton_clicked()
{
    ui->webView->forward();
}


void QuangBrowser::on_helpButton_clicked()
{
    QMessageBox* helpBox = new QMessageBox;
    QString message = "Xin chào\n";
    message += "Đây là trình duyệt của P.Quang \n";
    helpBox->setText(message);
    helpBox->exec();
}


void QuangBrowser::on_webView_urlChanged(const QUrl &arg1)
{
    ui->addressEdit->setText(ui->webView->url().toString());
}

