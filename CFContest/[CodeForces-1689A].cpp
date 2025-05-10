// Format
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, k;
        cin >> n >> m >> k;
        string a, b, c;
        cin >> a >> b;
        int ka = 0, kb = 0;
        char mc;
        while (!a.empty() && !b.empty())
        {
            if (ka < k && kb < k)
            {
                mc = min(*min_element(a.begin(), a.end()), *min_element(b.begin(), b.end()));
                c += mc;
                if (find(a.begin(), a.end(), mc) != a.end())
                {
                    ka++;
                    a.erase(find(a.begin(), a.end(), mc));
                    kb = 0;
                }
                else if (find(b.begin(), b.end(), mc) != b.end())
                {
                    kb++;
                    b.erase(find(b.begin(), b.end(), mc));
                    ka = 0;
                }
            }
            if (a.empty() || b.empty())
            {
                break;
            }
            if (ka == k)
            {
                mc = *min_element(b.begin(), b.end());
                c += mc;
                kb++;
                b.erase(find(b.begin(), b.end(), mc));
                ka = 0;
            }
            if (a.empty() || b.empty())
            {
                break;
            }
            if (kb == k)
            {
                mc = *min_element(a.begin(), a.end());
                c += mc;
                ka++;
                a.erase(find(a.begin(), a.end(), mc));
                kb = 0;
            }
        }
        cout << c << endl;
    }
}
