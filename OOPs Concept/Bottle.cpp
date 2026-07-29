#include "Bottle.h"

Bottle::Bottle(string b, string c, int cap)
{
    brand = b;
    color = c;
    capacity = cap;
    isFilled = false;
}

void Bottle::fillBottle()
{
    isFilled = true;
}

void Bottle::emptyBottle()
{
    isFilled = false;
}

void Bottle::display()
{
    cout << "Brand : " << brand << endl;
    cout << "Color : " << color << endl;
    cout << "Capacity : " << capacity << " ml" << endl;
    cout << "Filled : ";

    if (isFilled)
        cout << "Yes";
    else
        cout << "No";

    cout << endl;
}