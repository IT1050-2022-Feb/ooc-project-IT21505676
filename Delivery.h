#include <string>

using namespace std;

class Delivery {
  protected:
   string strDeliveryId;
   string strOrderId;
   string strDriverId;
   string strAddress;
   string strPaymentMethod;
   double dblAmount;

  public:
    Delivery();
    Delivery(string deliveryId, string orderId, string driverId, string address, string paymentMethod, double amount);
    void viewDeliveryDetails();
    ~Delivery();
};