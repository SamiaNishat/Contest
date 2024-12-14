#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n, m;
    cin >> n >> m;
    long long max_team = 0;
    long long max_friend = 0;

    max_team = n - (m - 1);

    max_friend = max_team * (max_team - 1) / 2;

    long long min_friend, min_team = n / m;
    long long rmnd = n - (min_team * m);
    long long a = m - rmnd;
    if (n % m == 0)
    {
        min_friend = (min_team * (min_team - 1) / 2) * m;
    }
    else
    {
        min_friend = (min_team * (min_team - 1) / 2) * a + (min_team * (min_team + 1) / 2) * rmnd;
        // (min_team+1) * (min_team+1-1)/2*rmnd
    }

    cout << min_friend << " " << max_friend << endl;
}