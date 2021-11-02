#include "productmanager.h"
#include "product.h"
#include <QDebug>

ProductManager::ProductManager(QObject *parent) : QObject(parent)
{

}

ProductManager::~ProductManager()
{

}

void ProductManager::addProduct(Product *product)
{
    m_Products.push_back(product);
    qDebug() << "New product added";
}
