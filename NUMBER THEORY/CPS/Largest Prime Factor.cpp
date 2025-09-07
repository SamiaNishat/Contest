#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll mx = 1e7 + 123;
bitset<mx> isPrime;
vector<ll> primes;

int main()
{
    isPrime[2] = 1;
    for (ll i = 3; i <= mx; i += 2)
        isPrime[i] = 1;
    for (ll i = 3; i * i <= mx; i += 2)
    {
        if (isPrime[i])
        {
            for (ll j = i * i; j <= mx; j += i)
            {
                isPrime[j] = 0;
            }
        }
    }

    primes.push_back(2);
    for (ll i = 3; i <= mx; i += 2)
    {
        if (isPrime[i])
            primes.push_back(i);
    }

    ll n;
    while (cin >> n)
    {
        vector<ll> primefacts;
        n = abs(n);
        if (n == 0)
            return 0;

        for (auto p : primes)
        {
            if (1ll * p * p > n)
                break;
            if (n % p == 0)
            {
                primefacts.push_back(p);
                while (n % p == 0)
                {
                    n /= p;
                }
            }
        }

        if (n > 1)
            primefacts.push_back(n);

        if (primefacts.size() <= 1)
            cout << -1 << endl;
        else
            cout << primefacts.back() << endl;
    }
}
