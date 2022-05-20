#include <string>

using namespace std;

class Product {
  protected:
   string strProductId;
   string strProductDescription;
   int intQuantity;
   double dblAmount;
   double dblDiscount;

  public:
    Product();
    Product(int no);
    Product(string productId, string productDesc, int qty, double amount, double discount);
    void viewProductDetails();
    ~Product();
};