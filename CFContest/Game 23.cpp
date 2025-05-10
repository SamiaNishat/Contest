#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    if (m % n != 0)
    {
        cout << -1 << endl;
        return 0;
    }
    else if (m == n)
    {
        cout << 0 << endl;
        return 0;
    }
    int d = m / n;
   int c2=0, c3=0;
    while (d % 2 == 0)
    {
        d /= 2;
        c2++;
    }
    while (d % 3 == 0)
    {
        d /= 3;
        c3++;
    }
    if (d != 1)
    {
        cout << -1 << endl;
        return 0;
    }

    cout <<c2+c3<< endl;
}
