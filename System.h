#include <string>
#include "User.h"
//#include "Product.h"
#include "Order.h"
#define SIZE_USER 100
#define SIZE_PROD 1000
#define SIZE_ORD 1000

using namespace std;

class System {
  protected:
   User *user[SIZE_USER];
   Product *product[SIZE_PROD];
   Order *order[SIZE_ORD];

  public:
    System();
    void viewSystemStatus();
    void viewSystemConfigurations();
    ~System();
};