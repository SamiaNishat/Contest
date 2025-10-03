#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int mx = 1e6 + 123;

bitset<mx> isprime;
vector<int> primes;

void primegen()
{
    isprime[2] = 1;
    for (int i = 3; i <= mx; i += 2)
        isprime[i] = 1;
    for (int i = 3; i * i <= mx; i += 2)
    {
        if (isprime[i])
        {
            for (int j = i * i; j <= mx; j += i)
                isprime[j] = 0;
        }
    }
    primes.push_back(2);
    for (int i = 3; i <= mx; i += 2)
    {
        if (isprime[i])
            primes.push_back(i);
    }
}
const int mxa = 1e6 + 1234;
vector<ll> phi(mxa);
void PHI()
{
    for (ll i = 1; i < mxa; i++)
        phi[i] = i;
    for (auto p : primes)
    {
        for (int i = p; i < mxa; i += p)
        {
            phi[i] /= p;
            phi[i] *= p - 1;
        }
    }
}
int main()
{
    primegen();
    PHI();
    vector<ll> lcm(mxa);
    for (int i = 1; i < mxa; i++)
    {
        for (int j = i; j < mxa; j += i)
        {
            lcm[j] += phi[i] * i;
        }
    }

    int t;
    scanf("%d",&t);
    ll ans;
    for (int i = 1; i <= t; i++)
    {
        int n;
        scanf("%d",&n);
        ans = lcm[n] + 1;
        ans *= n;
        ans /= 2;
        printf("%lld\n",ans);
    }
}
