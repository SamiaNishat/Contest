#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        string w;
        cin >> w;
        for (int i = 0; i < w.length(); i++)
        {
            if (w[i] == w[i + 1])
            {
                cout << 1 << endl;
                break;
            }
            if (i == w.length() - 1)
            {

                cout << w.length() << endl;
            }
        }
    }
}
