#include <bits/stdc++.h>
using namespace std;

#define ll long long
const ll mx = 10000005;
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
                isPrime[j] = 0;
        }
    }
    primes.push_back(2);
    for (ll i = 3; i <= mx; i += 2)
    {
        if (isPrime[i])
            primes.push_back(i);
    }

    vector<ll> primefacts;

    ll n;
    while (cin >> n)
    {
        ll tn = n;
        if (n == 0)
            return 0;
        if (n < 0)
        {
            n = abs(n);
        }

        for (auto p : primes)
        {
            if (p * p > n)
                break;
            if (n % p == 0)
            {
                while (n % p == 0)
                {
                    primefacts.push_back(p);
                    n /= p;
                }
            }
        }
        if (n > 1)
            primefacts.push_back(n);

        if (tn < 0)
        {
            cout << tn << " = -1 x ";
            for (ll i = 0; i < primefacts.size(); i++)
            {
                if (i == primefacts.size() - 1)
                    cout << primefacts[i];
                else
                    cout << primefacts[i] << " x ";
            }
            cout << endl;
        }
        else
        {
            cout << tn << " = ";
            for (ll i = 0; i < primefacts.size(); i++)
            {
                if (i == primefacts.size() - 1)
                    cout << primefacts[i];
                else
                    cout << primefacts[i] << " x ";
            }
            cout << endl;
        }
        primefacts.clear();
    }
}
