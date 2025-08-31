#include <bits/stdc++.h>
using namespace std;

int main()
{
    const long long lim = 1e7 + 123;
    bitset<lim> isPrime;
    isPrime[2] = 1;
    for (long long i = 3; i <= lim; i += 2)
    {
        isPrime[i] = 1;
    }
    for (long long i = 3; i * i <= lim; i += 2)
    {
        if (isPrime[i] == 1)
        {
            for (long long j = i * i; j <= lim; j += i)
            {
                isPrime[j] = 0;
            }
        }
    }

    
    vector<long long> cntPrime(lim);

    long long limX = 3200;
    long long limY = 60;

    for (long long i = 1; i <= limX; i++)
    {
        for (long long j = 1; j <= limY; j++)
        {
            long long val = (i * i) + (j * j * j * j);
            if (val <= lim && isPrime[val])
                cntPrime[val] = 1;
        }
    }
    for (int i = 1; i <= lim; i++)
    {
        cntPrime[i] += cntPrime[i - 1];
    }


    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        cout << cntPrime[n] << endl;
    }
}
