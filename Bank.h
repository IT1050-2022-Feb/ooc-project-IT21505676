#include <string>

using namespace std;

class Bank {
  protected:
   string strPaymentId;
   double dblAmount;

  public:
    Bank();
    Bank(string paymentId, double amount);
    void handleOnlinePayment();
    ~Bank();
};