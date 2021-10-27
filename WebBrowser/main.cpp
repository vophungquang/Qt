#include "quangbrowser.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QuangBrowser w;
    w.show();
    return a.exec();
}
