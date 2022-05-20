#include <iostream>
#include "Payment.h"

Payment::Payment() {
 cout << "Default Constructor Payment() called" << endl;
}

Payment::Payment(string paymentId, string orderId, string paymentMethod, double amount)
{
 strPaymentId = paymentId;
 strOrderId = orderId;
 strPaymentMethod = paymentMethod;
 dblAmount = amount;
}

Payment::~Payment()
{
 cout << "Destructed" << endl;
}