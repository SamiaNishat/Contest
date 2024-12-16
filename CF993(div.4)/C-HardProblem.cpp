#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int m, a, b, c;
    for (int i = 0; i < t; i++)
    {
        cin >> m >> a >> b >> c;
        int nm = 0;
        if (a <= m && b <= m && c <= (2 * m - a - b))
        {
            nm = a + b + c;
        }
        else if (a > m && b <= m && c <= (m - b))
        {
            nm = m + b + c;
        }
        else if (a <= m && b > m && c <= (m - a))
        {
            nm = a + m + c;
        }
        else if (a > m && b > m)
        {
            nm = m + m;
        }
        else if (a <= m && b <= m && c > (2 * m - a - b))
        {
            nm = a + b + (2 * m - a - b);
        }
        else if (a <= m && b > m && c > (m - a))
        {
            nm = a + m + (m - a);
        }
        else if (a > m && b <= m && c > (m - b))
        {
            nm = m + b + (m - b);
        }
        cout << nm << endl;
    }
}