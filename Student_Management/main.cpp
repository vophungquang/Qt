#include "student_management.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Student_Management w;
    w.show();
    return a.exec();
}
