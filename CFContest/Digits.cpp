#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, d;
        cin >> n >> d;

        cout << 1 << " ";
        if (d % 3 == 0 || n > 2)
        {
            cout << 3 << " ";
        }

        if (d == 5)
        {
            cout << 5 << " ";
        }
        if (n > 2 || d == 7)
        {
            cout << 7 << " ";
        }

        if (d == 9 || n >= 6 || n > 2 && d % 3 == 0)
        {
            cout << 9 << " ";
        }

        cout << endl;
    }
}
