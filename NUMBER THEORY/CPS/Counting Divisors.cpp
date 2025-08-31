#include <bits/stdc++.h>
using namespace std;
const long long lim = 1e6 + 12;

vector<int> divid(lim, 2);

int main()
{
    divid[0] = 0;
    divid[1] = 1;
    long long tl = lim / 2;
    for (long long i = 4; i <= lim; i += 2)
    {
        divid[i]++;
    }
    for (long long i = 3; i <= tl; i++)
    {
        for (long long j = 2 * i; j <= lim; j += i)
        {
            divid[j] += 1;
        }
    }

    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        long long n;
        cin >> n;
        cout << divid[n] << endl;
    }
}
