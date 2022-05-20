#include <string>

using namespace std;

class Manager {
  protected:
   string strStaffId;
   string strEmail;
   string strPassword;

  public:
    Manager();
    Manager(string staffId, string email, string password);
    void login(string email, string password);
    void addProducts();
    void editProducts();
    void removeProducts();
    void generateReports();
    ~Manager();
};