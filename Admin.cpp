#include <iostream>
#include "Admin.h"

Admin::Admin() {
 cout << "Default Constructor Admin() called" << endl;
}

Admin::Admin(string staffId, string email, string password)
{
 strStaffId = staffId;
 strEmail = email;
 strPassword = password;
}

Admin::~Admin()
{
 cout << "Destructed" << endl;
}