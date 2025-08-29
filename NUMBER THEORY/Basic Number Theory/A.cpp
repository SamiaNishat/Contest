#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n, k;
    cin >> n >> k;
    vector<long long> v;
    v.push_back(0);
    v.push_back(1);
    v.push_back(n);
    if (n % 2 == 0)
    {
        for (long long i = 2; i * i <= n; i++)
        {
            if (n % i == 0)
            {
                v.push_back(i);
                v.push_back(n / i);
            }
        }
    }
    else
    {
        for (long long i = 3; i * i <= n; i += 2)
        {
            if (n % i == 0)
            {
                v.push_back(i);
                v.push_back(n / i);
            }
        }
    }
    sort(v.begin(), v.end());
    v.erase(unique(v.begin(), v.end()), v.end());
    if (k > v.size() - 1)
        cout << -1 << endl;
    else
        cout << v[k] << endl;
}
