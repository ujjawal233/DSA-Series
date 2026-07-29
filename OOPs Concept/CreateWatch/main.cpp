#include <iostream>
#include "clock.cpp"

using namespace std;

int main()
{
    Clock rolex("Titan", 10, 25, 45);
    rolex.displayTime();
    rolex.setTime(11, 59, 59);
    rolex.displayTime();

    return 0;
}