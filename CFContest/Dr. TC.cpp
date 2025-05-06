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
        cin>>s;
        int count1 = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
            {
                s[i] = '0';
            }
            else
            {
                s[i] = '1';
            }
            for (int j = 0; j < n; j++)
            {
                if (s[j] == '1')
                {
                    count1++;
                }
            }
            if (s[i] == '1')
            {
                s[i] = '0';
            }
            else
            {
                s[i] = '1';
            }
        }
        cout << count1 << endl;
    }
}
