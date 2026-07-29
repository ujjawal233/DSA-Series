// product id, product name, product final bill applying 18%
#include <iostream>
using namespace std;

class ShoppingApplication
{
private:
    int productId;
    string productName;
    int productPrice;
    double productBill;

public:
    ShoppingApplication(string productName, int productId, int productPrice, double productBill)
    {
        this->productName = productName;
        this->productId = productId;
        this->productPrice = productPrice;
        this->productBill = productBill;
    }
    void displayShopping()
    {
        double finalBill = productBill * 1.18;
        cout << "Product ID: " << productId << endl;
        cout << "Product Name: " << productName << endl;
        cout << "Product Price: " << productPrice << endl;
        cout << "Final Bill (with 18% GST): " << finalBill << endl;
    }
};