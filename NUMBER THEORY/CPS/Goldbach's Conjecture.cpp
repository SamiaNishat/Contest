#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n = 1e6 + 123;
    vector<int> v(n);
    v[2] = 1;
    for (int i = 3; i <= n; i += 2)
    {
        v[i] = 1;
    }
    for (int i = 3; i * i <= n; i += 2)
    {
        if (v[i] != 0)
        {
            for (int j = i * i; j <= n; j += i)
            {
                v[j] = 0;
            }
        }
    }
    vector<int> prime;
    prime.push_back(2);
    for (int i = 3; i <= n; i += 2)
    {
        if (v[i] == 1)
        {
            prime.push_back(i);
        }
    }
    int x;
    while (cin >> x)
    {
        if (x == 0)
            return 0;
        int i = 0;

        for (i; i <= x; i++)
        {
            if (v[x - prime[i]] == 1)
            {
                cout << x << " = " << prime[i] << " + " << x - prime[i] << endl;
                break;
            }
        }
        if (i == x)
            cout << "Goldbach'sconjectureiswrong." << endl;
    }
}
