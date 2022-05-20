#include <iostream>
#include "Manager.h"

Manager::Manager() {
 cout << "Default Constructor Manager() called" << endl;
}

Manager::Manager(string staffId, string email, string password)
{
 strStaffId = staffId;
 strEmail = email;
 strPassword = password;
}

Manager::~Manager()
{
 cout << "Destructed" << endl;
}