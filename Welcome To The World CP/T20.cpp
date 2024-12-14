#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> p(7);
    for (int i = 0; i < 7; i++)
    {
        cin >> p.at(i);
    }
    int sum = 0;
    int i = 0;
    for (; i < 7; i++)
    {
        sum = sum + p.at(i);
        if (sum >= n)
        {
            cout << i + 1;
            return 0;
        }
        else if (i == 6 && sum < n)
        {
            i = -1;
        }
    }
}