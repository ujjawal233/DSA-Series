#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int cols = n / 2 + 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= cols; j++)
        {
            if (i == 1)
            {
                if (j == 1 || j == cols)
                {
                    cout << " ";
                    continue;
                }
                else
                {
                    cout << "*";
                    continue;
                }
            }

            if (i == cols)
            {
                cout << "*";
                continue;
            }

            if (j == 1 || j == cols)
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
