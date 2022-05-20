#include <iostream>
#include "Order.h"
//#include "Product.h"

Order::Order() {
  product[0] = new Product(10);
  product[1] = new Product(20);
  cout << "Constructor Order() called" << endl;
}

Order::Order(string orderId, string orderDesc, string dtmDate, int qty, double totAmount, double totDiscount)
{
 strOrderId = orderId;
 strOrderDescription = orderDesc;
 dtmDate = dtmDate;
 intQuantity = qty;
 dblTotalAmount = totAmount;
 dblTotalDiscount = totDiscount;
}

Order::~Order()
{
 cout << "Destructed" << endl;
}