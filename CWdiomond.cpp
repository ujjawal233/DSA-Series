#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int sp = n / 2;
    int m = (n / 2) + 1;
    for (int i = 0; i < n; i++)
    {
        cout << " ";

        for (int j = 0; j < n; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < n; j++)
        {
            if (j == m || j == i || i == n)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}
