#include <iostream>
using namespace std;

class BankAccount
{
private:
    int accountNumber;
    string accountHolderName;
    string accountType;
    double balance;

public:
    BankAccount(int accNo, string name, string type)
    {
        accountNumber = accNo;
        accountHolderName = name;
        accountType = type;
        balance = 1000; // Minimum balance
    }
    BankAccount(int accNo, string name, string type, double deposit)
    {
        accountNumber = accNo;
        accountHolderName = name;
        accountType = type;

        if (deposit >= 1000)
            balance = deposit;
        else
        {
            cout << "Minimum balance is ₹1000.\n";
            cout << "Account created with minimum balance ₹1000.\n";
            balance = 1000;
        }
    }
    void display()
    {
        cout << "\n------ Account Details ------" << endl;
        cout << "Account Number : " << accountNumber << endl;
        cout << "Account Holder : " << accountHolderName << endl;
        cout << "Account Type   : " << accountType << endl;
        cout << "Balance        : ₹" << balance << endl;
    }
};

int main()
{
    BankAccount acc1(101, "Ujjawal Kumar", "Savings");
    BankAccount acc2(102, "Rahul Sharma", "Current", 5000);
    BankAccount acc3(103, "Aman Verma", "Savings", 700);

    acc1.display();
    acc2.display();
    acc3.display();

    return 0;
}