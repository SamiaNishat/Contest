#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long mn;
    cin >> mn;
    long long mnm = abs(mn);

    long long revNum = 0;
    while (mnm > 0)
    {
        revNum = revNum * 10 + mnm % 10;
        mnm = mnm / 10;
    }
    if (mn < 0)
    {
        cout << "-";
    }

    cout << revNum;
}

// string n;
// n = to_string(mnm);
// list<int> li;
// for (int i = 0; i < n.size(); i++)
// {
//     int nn = n[i] - '0';
//     li.push_back(nn);
// }
// li.reverse();
// if (mn < 0)
// {
//     cout << "-";
// }
// for (int j : li)
// {
//     cout << j;
// }
