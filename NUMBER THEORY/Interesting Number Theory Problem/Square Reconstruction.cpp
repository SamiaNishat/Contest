#include <bits/stdc++.h>
using namespace std;

#define ll long long
const ll mx = 1e6 + 123;
bitset<mx> isPrime;
vector<ll> primes;

void PrimeGen()
{
    isPrime[2] = 1;

    for (ll i = 3; i <= mx; i += 2)
    {
        isPrime[i] = 1;
    }

    for (ll i = 3; i * i <= mx; i += 2)
    {
        if (isPrime[i])
        {
            for (ll j = i * i; j <= mx; j += i)
                isPrime[j] = 0;
        }
    }
    primes.push_back(2);

    for (ll i = 3; i <= mx; i += 2)
    {
        if (isPrime[i])
            primes.push_back(i);
    }
}

int main()
{
    PrimeGen();


    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll cnt = 0;
        ll m = 1;
        for (ll p : primes)
        {
            if (p * p > n)
                break;
            if (n % p == 0)
            {
                while (n % p == 0)
                {
                    cnt++;
                    n /= p;
                }
                if (cnt % 2 != 0)
                {
                    m *= p;
                }
                cnt = 0;
            }
        }
        if (n > 1)
        {
            m *= n;
        }
        cout << m << endl;
    }
}
