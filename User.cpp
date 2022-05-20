#include <iostream>
//#include <string>
#include "User.h"

User::User() {
 cout << "Default Constructor User() called" << endl;
}

User::User(string name, int mobile, string email, string password)
{
 strName = name;
 intMobileNo = mobile;
 strEmail = email;
 strPassword = password;
}

User::~User()
{
 cout << "Destructed" << endl;
}