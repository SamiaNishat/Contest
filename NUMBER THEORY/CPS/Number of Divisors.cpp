#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll mx = 1e6;
bitset<mx> isPrime;
vector<ll> primes;

void primeGen()
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
}
// vector<ll> primeFact;

ll NOD(ll n)
{

    ll nod = 1;
    for (ll p : primes)
    {
        if (p * p > n)
            break;
        if (n % p == 0)
        {
            ll cnt = 0;
            while (n % p == 0)
            {
                n /= p;
                cnt++;
            }
            cnt++;
            nod *= cnt;
        }
    }

    if (n > 1)
        nod *= 2;

    return nod;
}

int main()
{
    primeGen();
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        cout << NOD(n) << endl;
    }
}
