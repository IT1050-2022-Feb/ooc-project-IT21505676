#include <iostream>
#include "RegisteredCustomer.h"

RegisteredCustomer::RegisteredCustomer() {
 cout << "Default Constructor RegisteredCustomer() called" << endl;
}

RegisteredCustomer::RegisteredCustomer(string email, string password)
{
 strEmail = email;
 strPassword = password;
}

RegisteredCustomer::~RegisteredCustomer()
{
 cout << "Destructed" << endl;
}