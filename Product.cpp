#include <iostream>
#include "Product.h"

Product::Product() {
 cout << "Default Constructor Product() called" << endl;
}

Product::Product(string productId, string productDesc, int qty, double amount, double discount)
{
 strProductId = productId;
 strProductDescription = productDesc;
 intQuantity = qty;
 dblAmount = amount;
 dblDiscount = discount;
}

Product::~Product()
{
 cout << "Destructed" << endl;
}