#include <string>

using namespace std;

class Payment {
  protected:
   string strPaymentId;
   string strOrderId;
   string strPaymentMethod;
   double dblAmount;

  public:
    Payment();
    Payment(string paymentId, string orderId, string paymentMethod, double amount);
    void viewPaymentDetails();
    ~Payment();
};