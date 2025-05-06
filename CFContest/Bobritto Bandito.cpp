#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {  
        int n, m, l, r;
        cin >> n >> m >> l >> r;
        int ll;
        int rr;
        for (int i = l; i<=0; i++)
        {
            ll = i;
            for (int j = 0; j <= r && j <= m; j++)
            {
                rr = j;
                if (abs(ll) + rr == m)
                {
                    cout << ll << " " << rr << endl;
                    goto a;
                }
            }
        }
        a:
    }
    return 0;
}
