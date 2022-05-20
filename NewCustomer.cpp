#include <iostream>
#include "NewCustomer.h"

NewCustomer::NewCustomer() {
 cout << "Default Constructor NewCustomer() called" << endl;
}

NewCustomer::NewCustomer(string name, int mobile, string email, string password)
{
 strName = name;
 intMobileNo = mobile;
 strEmail = email;
 strPassword = password;
}

NewCustomer::~NewCustomer()
{
 cout << "Destructed" << endl;
}