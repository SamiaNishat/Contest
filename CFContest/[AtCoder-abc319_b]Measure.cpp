#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int j;
    vector<int> v;
    v.push_back(1);
    if (n % 2 == 0)
    {
        for (int i = 2; i < 10; i++)
        {
            if (n % i == 0)
                v.push_back(i);
        }
    }
    else
    {
        for (int i = 3; i < 10; i = i + 2)
        {
            if (n % i == 0)
                v.push_back(i);
        }
    }
    vector<int> v1;
    for (int i = 0; i < v.size(); i++)
    {
        v1.push_back(n / v[i]);
    }

    string s;
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j < v1.size(); j++)
        {
            if (i % v1[j] == 0)
            {
                s += v[j] + '0';
                break;
            }
            else if (j == v1.size() - 1)
            {
                s += '-';
                break;
            }
        }
    }

    cout << s;
}
