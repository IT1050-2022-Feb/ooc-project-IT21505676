#include <iostream>
#include <string>
#include "User.cpp"
#include "NewCustomer.cpp"
#include "RegisteredCustomer.cpp"
#include "Admin.cpp"
#include "Manager.cpp"
#include "Product.cpp"
#include "Order.cpp"
#include "Payment.cpp"
#include "Delivery.cpp"
#include "Bank.cpp"
#include "System.cpp"

using namespace std;

int main() {

  User* user1 = new User("Nimal", 0712222222, "nimal@gmail.com", "nimal123");
  User* user2 = new User("Kamal", 0773333333, "kamal@gmail.com", "kamal123");
  
  NewCustomer* newCustomer1 = new NewCustomer("Siripala", 0714444444, "siripala@gmail.com", "siripala123");
  NewCustomer* newCustomer2 = new NewCustomer("Somapala", 0775555555, "somapala@gmail.com", "somapala123");

  RegisteredCustomer* regCustomer1 = new RegisteredCustomer("mendis@gmail.com", "siripala123");
  RegisteredCustomer* regCustomer2 = new RegisteredCustomer("dikwella@gmail.com", "somapala123");

  Admin* admin1 = new Admin("STF001", "John@gmail.com", "john123");
  Admin* admin2 = new Admin("STF001", "mike@gmail.com", "mike123");
  
  Manager* manager1 = new Manager("STF051", "simon@gmail.com", "simon123");
  Manager* manager2 = new Manager("STF051", "cindy@gmail.com", "cindy123");

  Product* product1 = new Product("PRD101", "Long sleeved shirt", 3, 1975.00, 0.00);
  Product* product2 = new Product("PRD092", "Ladies top", 2, 1250.00, 5.00);

  Order* order1 = new Order("ORD024", "Birthday order", "2022-05-07", 3, 3250.00, 0.00);
  Order* order2 = new Order("ORD063", "Company order", "2022-05-08", 20, 21500.00, 5.00);

  Payment* payment1 = new Payment("PAY071", "ORD024", "Cash on delivery", 3250.00);
  Payment* payment2 = new Payment("PAY098", "ORD063", "Online", 21500.00);

  Delivery* delivery1 = new Delivery("DEL045", "ORD024", "DRV003", "Kandy", "Cash on delivery", 3250.00);
  Delivery* delivery2 = new Delivery("DEL069", "ORD063", "DRV007", "Gampaha", "Online", 21500.00);

  Bank* bank1 = new Bank("PAY071", 3250.00);
  Bank* bank2 = new Bank("PAY098", 21500.00);
  
  System* system = new System();

  delete user1;
  delete user2;
  
  delete newCustomer1;
  delete newCustomer2;
  
  delete regCustomer1;
  delete regCustomer2;
  
  delete admin1;
  delete admin2;
  
  delete manager1;
  delete manager2;
  
  delete product1;
  delete product2;
  
  delete order1;
  delete order2;
  
  delete payment1;
  delete payment2;
  
  delete delivery1;
  delete delivery2;
  
  delete bank1;
  delete bank2;

  delete system;
  
  std::cout << "Main file finished.\n";
  return 0;
  
}