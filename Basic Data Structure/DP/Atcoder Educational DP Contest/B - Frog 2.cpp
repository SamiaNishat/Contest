#include <bits/stdc++.h>
using namespace std;
const int Max = 1000005;
int dp[Max];
int n, k;
vector<int> h(Max);
int solve(int ind)
{
    if (ind == n - 1)
        return 0;
    if (dp[ind] != -1)
        return dp[ind];
    int res = INT_MAX;

    for (int tk = 1; tk <= k; tk++)
    {
        if (ind + tk < n)
        {
            int dif = abs(h[ind] - h[ind + tk]);
            res = min(res, dif + solve(ind + tk));
        }
    }

    dp[ind] = res;
    return res;
}

int main()
{
    memset(dp, -1, sizeof(dp));

    cin >> n >> k;

    for (int i = 0; i < n; i++)
        cin >> h[i];

    cout << solve(0);
}
