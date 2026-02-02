#include <bits/stdc++.h>
using namespace std;
int n, vis[1000006], dp[1000006];
int mod = 1000000000 + 7;

int solve(int sum)
{
    if (sum == 0)
        return 1;
    int res = 0;
    for (int j = 1; j <= 6; j++)
    {
        if (sum >= j)
        {
            if (vis[sum - j])
            {
                res += dp[sum - j];
                res %= mod;
            }

            else
            {
                int k = solve(sum - j);
                res += k;
                res %= mod;
                dp[sum - j] = k;
                vis[sum - j] = 1;
            }
        }
    }

    return res;
}

int main()
{
    cin >> n;
    int cnt = solve(n);
    cout << solve(n) << endl;
}
