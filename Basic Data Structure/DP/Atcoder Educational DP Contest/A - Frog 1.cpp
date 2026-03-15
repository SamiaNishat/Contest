#include <bits/stdc++.h>
using namespace std;
const int Max = 1000005;
int dp[Max];
int n;
vector<int> h;
int solve(int ind)
{
    if (ind == n - 1)
        return 0;
    if (dp[ind] != -1)
        return dp[ind];
    int res = INT_MAX;
    int dif = abs(h[ind] - h[ind + 1]);
    res = min(res, dif + solve(ind + 1));

    if (ind + 2 < n)
    {
        dif = abs(h[ind] - h[ind + 2]);
        res = min(res, dif + solve(ind + 2));
    }

    dp[ind] = res;
    return res;
}

int main()
{
    memset(dp, -1, sizeof(dp));

    cin >> n;
    h.resize(n);

    for (int i = 0; i < n; i++)
        cin >> h[i];

    cout << solve(0);
}




