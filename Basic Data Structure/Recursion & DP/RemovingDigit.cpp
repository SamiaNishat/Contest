#include <bits/stdc++.h>
using namespace std;
int dp[1000005], vis[1000005];
int digit(int n)
{
    if (n == 0)
        return 0;
    if (vis[n])
    {
        return dp[n];
    }

    int n2 = n;
    int res = INT_MAX;
    while (n2 > 0)
    {
        int m = n2 % 10;
        // n = n / 10;
        if (m != 0)
        {
            res = min(res, 1 + digit(n - m));
        }
        n2 = n2 / 10;
    }
    dp[n] = res;
    vis[n] = 1;
    return res;
}

int main()
{
    int n;
    cin >> n;
    cout << digit(n) << endl;
}
