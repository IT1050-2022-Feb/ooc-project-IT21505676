#include <string>
#include "Product.h"
#define SIZE_PROD 1000

using namespace std;

class Order {
  protected:
   string strOrderId;
   string strOrderDescription;
   string dtmDate;
   Product *product[SIZE_PROD];
   int intQuantity;
   double dblTotalAmount;
   double dblTotalDiscount;

  public:
    Order();
    Order(string orderId, string orderDesc, string dtmDate, int qty, double totAmount, double totDiscount);
    void viewOrderDetails();
    void editOrderDetails();
    ~Order();
};