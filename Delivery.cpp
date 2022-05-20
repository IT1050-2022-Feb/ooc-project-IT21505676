#include <iostream>
#include "Delivery.h"

Delivery::Delivery() {
 cout << "Default Constructor Delivery() called" << endl;
}

Delivery::Delivery(string deliveryId, string orderId, string driverId, string address, string paymentMethod, double amount)
{
 strDeliveryId = deliveryId;
 strOrderId = orderId;
 strDriverId = driverId;
 strAddress = address;
 strPaymentMethod = paymentMethod;
 dblAmount = amount;
}

Delivery::~Delivery()
{
 cout << "Destructed" << endl;
}