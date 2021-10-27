#ifndef QUANGBROWSER_H
#define QUANGBROWSER_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class QuangBrowser; }
QT_END_NAMESPACE

class QuangBrowser : public QMainWindow
{
    Q_OBJECT

public:
    QuangBrowser(QWidget *parent = nullptr);
    ~QuangBrowser();

private slots:
    void on_addressEdit_returnPressed();

    void on_backButton_clicked();

    void on_forwardButton_clicked();

    void on_helpButton_clicked();

    void on_webView_urlChanged(const QUrl &arg1);

private:
    Ui::QuangBrowser *ui;
};
#endif // QUANGBROWSER_H
