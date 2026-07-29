#include <iostream>
#include <cmath>
using namespace std;
int main()
{

    int n = 9;
    for (int i = 0; i * i < n; i++)
    {
        if (pow(i, 3) == n)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}