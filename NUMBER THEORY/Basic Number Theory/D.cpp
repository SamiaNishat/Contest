#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll mx = 1000005;

bitset<mx> isPrime;
vector<ll> primes;

int main()
{
    isPrime[2] = 1;
    for (ll i = 3; i <= mx; i += 2)
    {
        isPrime[i] = 1;
    }
    for (ll i = 3; i * i <= mx; i += 2)
    {
        if (isPrime[i])
            for (ll j = i * i; j <= mx; j += i)
            {
                isPrime[j] = 0;
            }
    }
    primes.push_back(2);
    for (ll i = 3; i <= mx; i += 2)
    {
        if (isPrime[i])
        {
            primes.push_back(i);
        }
    }

    ll n;

    while (cin >> n)
    {
        ll tn = n;
        if (n == 0)
            return 0;
        vector<ll> primefacts;
        for (ll prime : primes)
        {
            if (prime * prime > n)
                break;
            if (n % prime == 0)
            {
                while (n % prime == 0)
                {
                    primefacts.push_back(prime);
                    n /= prime;
                }
            }
        }

        if (n > 1)
            primefacts.push_back(n);
        primefacts.erase(unique(primefacts.begin(), primefacts.end()), primefacts.end());

        ll num = 0;
        for (ll f : primefacts)
            num++;
        cout << tn << " : " << num << endl;
    }
}
