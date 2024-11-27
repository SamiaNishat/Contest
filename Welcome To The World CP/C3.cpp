#include <bits/stdc++.h>
using namespace std;

int n;
long long aVeryBigSum(long long ar[])
{
    long long sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + ar[i];
    }
    return sum;
}

int main()
{
    cin >> n;
    long long ar[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    long long sum;
    sum = aVeryBigSum(ar);
    cout << sum;
}