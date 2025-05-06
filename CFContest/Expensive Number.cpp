#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string n;
        cin >> n;

        int length = n.size();
        int count = 0;
        int count0 = 0;
        int last0 = 0;
        // int count00 = 0;

        for (int i = 0; i < n.size(); i++)
        {
            if (n[i] == '0')
            {
                count0++;
            }
            else
            {
                count++;
            }
        }

        for (int i = n.size() - 1; i >= 0; i--)
        {
            if (n[i] == '0')
            {
                last0++;
            }
            else
            {
                break;
            }
        }
        if (count == length)
        {
            cout << length - 1 << endl;
        }
        else if (count0 == last0)
        {
            cout << length - 1 << endl;
        }
        else if (count0 != last0)
        {
            cout << length - 1 - count0 + last0 << endl;
        }
    }
}
