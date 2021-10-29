#include "student_management.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Student_Management w;

    w.AddStudent("Võ Phụng Quang","26/03/1999","Class A");
    w.AddStudent("Võ Phụng Quang A","26/03/1999","Class A");
    w.AddStudent("Võ Phụng Quang B","26/03/1999","Class B");
    w.AddStudent("Võ Phụng Quang C","26/03/1999","Class C");

    w.show();
    return a.exec();
}
