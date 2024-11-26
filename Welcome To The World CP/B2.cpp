#include <bits/stdc++.h>
using namespace std;

int n;
int simpleArraySum(int ar[])
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + ar[i];
    }
    return sum;
}

int main()
{
    cin >> n;
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    int sum = simpleArraySum(ar);
    cout << sum;
}