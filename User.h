#include <string>

using namespace std;

class User {
  protected:
   string strName;
   int intMobileNo;
   string strEmail;
   string strPassword;

  public:
    User();
    User(string name, int mobile, string email, string password);
    void viewUserDetails();
    ~User();
};