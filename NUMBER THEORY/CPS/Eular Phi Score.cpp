#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll mx = 1e6 + 123;

bitset<mx> isprime;
vector<ll> primes;

void primegen()
{
    isprime[2] = 1;
    for (ll i = 3; i <= mx; i += 2)
    {
        isprime[i] = 1;
    }

    for (ll i = 3; i * i <= mx; i += 2)
    {
        if (isprime[i])
        {
            for (ll j = i * i; j <= mx; j += i)
            {
                isprime[j] = 0;
            }
        }
    }

    primes.push_back(2);
    for (ll i = 3; i <= mx; i++)
    {
        if (isprime[i])
            primes.push_back(i);
    }
}

int main()
{
    primegen();
    ll lim = 5e6 + 123;
    vector<ll> phi(lim);

    for (ll i = 1; i <= lim; i++)
    {
        phi[i] = i;
    }

    for (auto p : primes)
    {
        for (ll i = p; i <= lim; i += p)
        {
            phi[i] /= p;
            phi[i] *= p - 1;
        }
    }

    for (int i = 1; i <= mx; i++)
    {
        phi[i] = (phi[i] * phi[i]) + phi[i - 1];
    }
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        ll a, b;
        cin >> a >> b;

        cout << "Case " << i << ": " << phi[b] - phi[a - 1] << endl;
    }
}
