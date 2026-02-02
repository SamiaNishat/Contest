#include <bits/stdc++.h>
using namespace std;
int n, dp[50];
int solve(int sum)
{
    if (dp[sum] != -1)
        return dp[sum];
    if (sum == 0)
        return 1;
    int res = 0;
    for (int i = 1; i <= 2; i++)
    {
        if (sum >= i)
        {
            res += solve(sum - i);
        }
    }
    dp[sum] = res;
    return res;
}

int main()
{
    memset(dp, -1, sizeof(dp));

    cin >> n;
    cout << solve(n);
}
