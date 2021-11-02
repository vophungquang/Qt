#ifndef PRODUCT_H
#define PRODUCT_H

#include <QObject>

class Product : public QObject
{
    Q_OBJECT
public:
    explicit Product(QObject *parent = nullptr);
    ~Product();

    void input();

signals:
    void newProduct(Product*);
public slots:

};

#endif // PRODUCT_H
