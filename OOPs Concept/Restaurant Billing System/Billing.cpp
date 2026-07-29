#include <iostream>
using namespace std;

//================ MenuItem Contain ================
class MenuItem
{
private:
    int itemId;
    string itemName;
    int itemPrice;

public:
    MenuItem(int id, string name, int price)
    {
        itemId = id;
        itemName = name;
        itemPrice = price;
    }

    void displayMenuItem()
    {
        cout << "\n----- MenuItem Contain -----" << endl;
        cout << "Item ID      : " << itemId << endl;
        cout << "Item Name    : " << itemName << endl;
        cout << "Item Price   : " << itemPrice << endl;
    }
};

//============== Order Contains =================

