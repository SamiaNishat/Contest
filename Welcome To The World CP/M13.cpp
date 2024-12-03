#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int evod[n];
    for (int i = 0; i < n; i++)
    {
        cin >> evod[i];
    }

    for (int i = 0; i <= n; i++)
    {
        if (evod[0] % 2 == 0 && evod[1] % 2 == 0)
        {
            if (evod[i] % 2 != 0)
            {
                cout << i + 1;
                break;
            }
        }
        else if (evod[0] % 2 != 0 && evod[1] % 2 != 0)
        {
            if (evod[i] % 2 == 0)
            {
                cout << i + 1;
                break;
            }
        }
        else if (evod[0] % 2 != 0 && evod[1] % 2 == 0)
        {
            if (evod[2] % 2 == 0)
            {
                cout << 1;
                break;
            }
            else if (evod[2] % 2 != 0)
            {
                cout << 2;
                break;
            }
        }
        else if (evod[0] % 2 == 0 && evod[1] % 2 != 0)
        {
            if (evod[2] % 2 == 0)
            {
                cout << 2;
                break;
            }
            else if (evod[2] % 2 != 0)
            {
                cout << 1;
                break;
            }
        }
    }
}