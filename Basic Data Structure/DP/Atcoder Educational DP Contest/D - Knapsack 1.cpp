#include <bits/stdc++.h>
using namespace std;
long long dp[100][100001];
long long N, W;
long long w[100], v[100];

long long goriberDP(long long index, long long remW)
{
    if (index == N || remW == 0)
        return 0;
    if (dp[index][remW] != -1)
        return dp[index][remW];
    long long res = 0;
    if (remW >= w[index])
    {
        long long nibo = v[index] + goriberDP(index + 1, remW - w[index]);
        res = max(res, nibo);
    }

    long long nibona = goriberDP(index + 1, remW);
    res = max(res, nibona);
    dp[index][remW] = res;
    return res;
}

int main()
{
    cin >> N >> W;
    for (long long i = 0; i < N; i++)
    {
        cin >> w[i] >> v[i];
    }
    memset(dp, -1, sizeof(dp));

    cout << goriberDP(0, W);
}
