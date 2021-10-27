/********************************************************************************
** Form generated from reading UI file 'quangbrowser.ui'
**
** Created by: Qt User Interface Compiler version 5.12.11
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QUANGBROWSER_H
#define UI_QUANGBROWSER_H

#include <QtCore/QVariant>
#include <QtWebEngineWidgets/QWebEngineView>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QuangBrowser
{
public:
    QWidget *centralwidget;
    QPushButton *backButton;
    QPushButton *forwardButton;
    QLineEdit *addressEdit;
    QPushButton *helpButton;
    QWebEngineView *webView;

    void setupUi(QMainWindow *QuangBrowser)
    {
        if (QuangBrowser->objectName().isEmpty())
            QuangBrowser->setObjectName(QString::fromUtf8("QuangBrowser"));
        QuangBrowser->resize(698, 642);
        centralwidget = new QWidget(QuangBrowser);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        backButton = new QPushButton(centralwidget);
        backButton->setObjectName(QString::fromUtf8("backButton"));
        backButton->setGeometry(QRect(10, 10, 31, 22));
        forwardButton = new QPushButton(centralwidget);
        forwardButton->setObjectName(QString::fromUtf8("forwardButton"));
        forwardButton->setGeometry(QRect(40, 10, 31, 22));
        addressEdit = new QLineEdit(centralwidget);
        addressEdit->setObjectName(QString::fromUtf8("addressEdit"));
        addressEdit->setGeometry(QRect(70, 10, 571, 22));
        helpButton = new QPushButton(centralwidget);
        helpButton->setObjectName(QString::fromUtf8("helpButton"));
        helpButton->setGeometry(QRect(640, 10, 41, 22));
        webView = new QWebEngineView(centralwidget);
        webView->setObjectName(QString::fromUtf8("webView"));
        webView->setGeometry(QRect(10, 40, 661, 651));
        webView->setProperty("url", QVariant(QUrl(QString::fromUtf8("https://www.google.com/"))));
        QuangBrowser->setCentralWidget(centralwidget);

        retranslateUi(QuangBrowser);

        QMetaObject::connectSlotsByName(QuangBrowser);
    } // setupUi

    void retranslateUi(QMainWindow *QuangBrowser)
    {
        QuangBrowser->setWindowTitle(QApplication::translate("QuangBrowser", "QuangBrowser", nullptr));
        backButton->setText(QApplication::translate("QuangBrowser", "<-", nullptr));
        forwardButton->setText(QApplication::translate("QuangBrowser", "->", nullptr));
        addressEdit->setText(QApplication::translate("QuangBrowser", "http://google.com", nullptr));
        helpButton->setText(QApplication::translate("QuangBrowser", "Help", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QuangBrowser: public Ui_QuangBrowser {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QUANGBROWSER_H
