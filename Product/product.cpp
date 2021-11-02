#include "product.h"

Product::Product(QObject *parent) : QObject(parent)
{

}

Product::~Product()
{

}

void Product::input()
{
    emit newProduct(this);
}
