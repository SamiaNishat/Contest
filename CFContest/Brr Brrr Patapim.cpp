// Format
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n + 1][n + 1];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> a[i][j];
            }
        }
        unordered_set<int> s;
        for (int i = n - 1; i >= 0; i--)
        {
            for (int j = n - 1; j >= 0; j--)
            {
                s.insert(a[i][j]);
            }
        }
        for (int i = 1; i <= 2 * n; i++)
        {
            if (s.find(i) == s.end())
            {
                cout << i << " ";
                break;
            }
        }
       
        for (int i = 0; i < n; i++)
        {
            cout << a[0][i] << " ";
        }
        for (int i = 1; i < n; i++)
        {
            cout << a[i][n - 1] << " ";
        }
        cout << endl;
    }
}
