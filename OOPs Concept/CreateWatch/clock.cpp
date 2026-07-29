// WAP to create a blueprint class of clock having properties of hh mm ss(twelve hour time) also behaviour as time make sure that clock user meta user class of rolex and also display the behaviour time.create two file one main.cpp & clock.cpp.

#include <iostream>
#include <string>

using namespace std;

class Clock
{
private:
    int hh;
    int mm;
    int ss;

    string brand;

public:
    Clock(string brand, int hh, int mm, int ss)
    {
        this->brand = brand;
        this->hh = hh;
        this->mm = mm;
        this->ss = ss;
    }

    void displayTime()
    {
        cout << brand << " Clock Time: ";

        if (hh < 10)
            cout << "0";

        cout << hh << ":";

        if (mm < 10)
            cout << "0";

        cout << mm << ":";

        if (ss < 10)
            cout << "0";

        cout << ss << endl;
    }

    // Behaviour: Set Time
    void setTime(int hh, int mm, int ss)
    {
        this->hh = hh;
        this->mm = mm;
        this->ss = ss;
    }
};