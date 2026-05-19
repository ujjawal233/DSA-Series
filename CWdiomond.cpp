#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int m = (n / 2) + 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < m; j++)
        {
            if (j == (n / 2) + 1 || j == 2 * i || i == n - 1)
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
