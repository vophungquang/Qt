#ifndef STUDENT_MANAGEMENT_H
#define STUDENT_MANAGEMENT_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class Student_Management; }
QT_END_NAMESPACE

class QListWidgetItem;

class Student_Management : public QWidget
{
    Q_OBJECT

public:
    Student_Management(QWidget *parent = nullptr);
    ~Student_Management();

private slots:
    void on_listWidget_itemDoubleClicked(QListWidgetItem *item);

private:
    Ui::Student_Management *ui;
};
#endif // STUDENT_MANAGEMENT_H
