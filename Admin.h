#include <string>

using namespace std;

class Admin {
  protected:
   string strStaffId;
   string strEmail;
   string strPassword;

  public:
    Admin();
    Admin(string staffId, string email, string password);
    void login(string email, string password);
    void maintainSystem();
    void updateSystem();
    ~Admin();
};