#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    for (int i = n; i <= m; i++)
    {
        if (i < 2)
            continue;
        int count = 0;

        for (int j = 2; j * j <= i; j++)
        {
            if (i % j == 0)
            {
                count++;
                break;
            }
        }

        if (count == 0)
            cout << i << " ";
    }

    return 0;
}