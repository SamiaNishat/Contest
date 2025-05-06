// Format
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        int x = a + b + c;
        int r = x / 3;
        if (x % 3 != 0)
        {
            cout << "NO" << endl;
        }
        else if (a > r || b > r)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
}
