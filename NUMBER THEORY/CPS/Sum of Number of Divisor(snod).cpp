#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int snod = 0;
    int t = 0;
    int sq = sqrt(n);
    for (int i = 1; i <= sq; i++)
    {
        snod += (n / i - i) * 2;
    }
    snod += sq;
    cout << snod;
}
