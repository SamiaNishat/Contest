#include <bits/stdc++.h>
using namespace std;

#define ll long long
const ll mx = 1e6 + 123;

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

    ll tst;
    cin >> tst;
    for (ll w = 1; w <= tst; w++)
    {
        ll n;
        cin >> n;

        ll t = n;
        vector<ll> primefacts;

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

        vector<ll> facts;

        for (ll i = 0; i < primefacts.size(); i++)
        {
            facts.push_back(primefacts[i]);
            for (ll j = i + 1; j <= primefacts.size(); j++)
            {
                if (primefacts[i] * primefacts[j] <= t && primefacts[i] * primefacts[j] > 1)
                    facts.push_back(primefacts[i] * primefacts[j]);
            }
        }
        ll s = 1;
        for (ll i = 0; i < primefacts.size(); i++)
        {
            s = s * primefacts[i];
            facts.push_back(s);
        }
        sort(facts.begin(), facts.end());
        facts.erase(unique(facts.begin(), facts.end()), facts.end());
        int sumofdivs = 0;
        for (ll i : facts)
            sumofdivs++;

        cout << "Case " << w << ": " << sumofdivs << endl;
    }
}
