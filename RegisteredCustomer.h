#include <string>

using namespace std;

class RegisteredCustomer {
  protected:
   string strEmail;
   string strPassword;

  public:
    RegisteredCustomer();
    RegisteredCustomer(string email, string password);
    void login(string email, string password);
    void searchProducts();
    void placeOrder();
    void initiatePayment();
    ~RegisteredCustomer();
};