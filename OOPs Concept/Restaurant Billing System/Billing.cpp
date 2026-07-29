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

class Order
{
private:
    int orderId;
    int orderQuentity;
    int

        MenuItem menu;

public:
    MenuItem(int orderid, string iname, int tid, string tname, string subject, int exp)
        : teacher(tid, tname, subject, exp)
    {
        classId = cid;
        className = cname;
    }

    void displayClassRoom()
    {
        cout << "\n===== ClassRoom Details =====" << endl;
        cout << "Class ID        : " << classId << endl;
        cout << "Class Name      : " << className << endl;

        teacher.displayTeacher();
    }
};
}