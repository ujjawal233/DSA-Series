#include "Bottle.h"

int main()
{
    Bottle b1("Milton", "Blue", 1000);

    b1.display();

    b1.fillBottle();

    b1.display();

    return 0;
}