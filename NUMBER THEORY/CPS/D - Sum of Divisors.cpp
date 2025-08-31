#include <bits/stdc++.h>
using namespace std;


int main()
{
    long long n;
    cin >> n;

    vector<int> divid(n + 2, 2);
    divid[0] = 0;
    divid[1] = 1;
    long long tl = n / 2;
    for (long long i = 4; i <= n; i += 2)
    {
        divid[i]++;
    }
    for (long long i = 3; i <= tl; i++)
    {
        for (long long j = 2 * i; j <= n; j += i)
        {
            divid[j] += 1;
        }
    }

    long long sumofDiv = 0;

    for (long long i = 1; i <= n; i++)
    {
        sumofDiv += i * divid[i];
    }
    cout << sumofDiv << endl;
}
