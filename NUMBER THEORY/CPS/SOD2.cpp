#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll mx = 1e8 + 123;
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
                isprime[j] = 0;
        }
    }

    primes.push_back(2);
    for (ll i = 3; i <= mx; i += 2)
    {
        if (isprime[i])
            primes.push_back(i);
    }
}

ll SOD(ll n)
{
    ll sod = 1;
    ll a, sum;
    for (ll p : primes)
    {
        if (p * p > n)
            break;
        if (n % p == 0)
        {
            a = 1;
            sum = 1;
            while (n % p == 0)
            {
                a *= p;
                sum += a;
                n /= p;
            }
            sod *= sum;
        }
    }

    if (n > 1)
    {
        sod *= (1 + n);
    }
    return sod;
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
        cout << SOD(n) - n << endl;
    }
}
