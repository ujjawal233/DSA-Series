// Concatenate Non-Zero Digits and Multiply by Sum II
//  using prefix method
// enter a number: 10203004, queries:[[0, 7], [1, 3], [4, 6]]
// Output: [12340, 4, 9].
//

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    string s = to_string(n);
    vector<int> prefix(s.size() + 1, 0);
    for (int i = 0; i < s.size(); i++)
    {
        prefix[i + 1] = prefix[i] + (s[i] - '0');
    }
    int q;
    cout << "Enter number of queries: ";
    cin >> q;
    vector<int> result;
    for (int i = 0; i < q; i++)
    {
        int l, r;
        cout << "Enter query " << i + 1 << " (l r): ";
        cin >> l >> r;
        int sum = prefix[r + 1] - prefix[l];
        string concat = "";
        for (int j = l; j <= r; j++)
        {
            if (s[j] != '0')
            {
                concat += s[j];
            }
        }
        int concat_num = concat.empty() ? 0 : stoi(concat);
        result.push_back(concat_num * sum);
    }
    cout << "Output: [";
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i];
        if (i != result.size() - 1)
        {
            cout << ", ";
        }
    }
    cout << "]" << endl;
    return 0;
}