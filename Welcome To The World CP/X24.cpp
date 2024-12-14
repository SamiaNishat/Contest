#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a, b;
    if (n == 0)
    {
        cout << " " << endl;
        cout << " " << endl;
    }
    else if (n == 2)
    {
        cout << "1" << endl;
        cout << "1" << endl;
    }
    else if (n % 2 == 0)
    {
        a = n / 2 - 1;
        b = n / 2 + 1;
        if (a % 2 != 0 && b % 2 != 0)
        {
            cout << a << endl;
            cout << b << endl;
        }
        else
        {
            cout << a - 1 << endl;
            cout << b + 1 << endl;
        }
    }
    else
    {
        cout << n / 2 << endl;
        cout << n / 2 + 1 << endl;
    }
}