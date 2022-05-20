#include <iostream>
#include "Bank.h"

Bank::Bank() {
 cout << "Default Constructor Bank() called" << endl;
}

Bank::Bank(string paymentId, double amount)
{
 strPaymentId = paymentId;
 dblAmount = amount;
}

Bank::~Bank()
{
 cout << "Destructed" << endl;
}