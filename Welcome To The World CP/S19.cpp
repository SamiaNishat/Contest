#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a.at(i);
    }
    int max = a.at(0);
    for (int i = 0; i < n; i++)
    {
        if (max < a.at(i))
        {
            max = a.at(i);
        }
    }

    int s = 0;
    for (int i = 0; i < n; i++)
    {
        s = s + (max - a.at(i));
    }
    cout << s;
}