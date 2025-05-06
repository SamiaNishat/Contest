// Format
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;

        int l;
        char ls;

        if (s[n - 2] == '<')
        {
            l = 1;
            ls = s[n - 2];
        }
        else
        {
            l = n;
            ls = s[n - 2];
        }
        int countls = 0;
        for (int i = 0; i < n - 1; i++)
        {
            if (s[i] == ls)
            {
                countls++;
            }
        }

        int x;
        if (ls == '<')
        {
            x = l + countls;
        }
        else
        {
            x = l - countls;
        }
        cout << x << " ";

        int countss = 0;
        int countls1 = 0;
        for (int i = 0; i < n - 1; i++)
        {
            if (s[i] == '<')
            {
                countss++;

                cout << x - (countss * 1) << " ";
            }
            else
            {
                countls1++;
                cout << x + countls1 << " ";
            }
        }

        cout << endl;
    }
}
