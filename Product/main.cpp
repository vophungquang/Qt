#include <QCoreApplication>
#include "product.h"
#include "productmanager.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Product *product = new Product();

    ProductManager *msg = new ProductManager();

    QObject::connect(product,SIGNAL(newProduct(Product*)),msg,SLOT(addProduct(Product*)));

    product->input();

    return a.exec();
}
