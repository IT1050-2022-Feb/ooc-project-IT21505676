#include <string>

using namespace std;

class NewCustomer {
  protected:
   string strName;
   int intMobileNo;
   string strEmail;
   string strPassword;

  public:
    NewCustomer();
    NewCustomer(string name, int mobile, string email, string password);
    void registerNewCustomer(string name, int mobile, string email, string password);
    ~NewCustomer();
};