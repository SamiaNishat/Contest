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
        isprime[i] = 1;
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
    for (ll i = 3; i <= mx; i += 2)
        if (isprime[i])
            primes.push_back(i);
}

ll PHI(ll n)
{
    ll eular = n;
    for (auto p : primes)
    {
        if (p * p > n)
            break;
        if (n % p == 0)
        {

            while (n % p == 0)
            {
                n /= p;
            }

            eular /= p;
            eular *= (p - 1);
        }
    }
    if (n > 1)
    {
        eular /= n;
        eular *= (n - 1);
    }
    return eular;
}

int main()
{
    primegen();
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        cout << PHI(n) << endl;
    }
}
