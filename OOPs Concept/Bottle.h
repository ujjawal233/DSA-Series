#ifndef BOTTLE_H
#define BOTTLE_H

#include <iostream>
using namespace std;

class Bottle
{

private:
    string brand;
    string color;
    int capacity;
    bool isFilled;

public:
    Bottle(string b, string c, int cap);

    void fillBottle();

    void emptyBottle();

    void display();
};

#endif