// Format
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        vector<int> v;
        vector<int> v1;
        for (int i = 0; i < s.size(); i++)
        {

            v.push_back(s[i] - '0');
        }
        for (int i = 1; i <= 10; i++)
        {
            v1.push_back(10 - i);
        }

        for (int i = 0; i < 10; i++)
        {
            bool flag = false;
            for (int j = 0; j < v.size(); j++)
            {
                if (v[j] == v1[i])
                {
                    cout << v[j];
                    v.erase(v.begin() + j);
                    flag = true;
                    break;
                }
            }
            if (flag)
                continue;

            for (int j = 0; j < v.size(); j++)
            {
                if (v[j] == v1[i] + 1)
                {
                    cout << v[j];
                    v.erase(v.begin() + j);
                    flag = true;
                    break;
                }
            }
            if (flag)
                continue;
            for (int j = 0; j < v.size(); j++)
            {
                if (v[j] == v1[i] + 2)
                {
                    cout << v[j];
                    v.erase(v.begin() + j);
                    flag = true;
                    break;
                }
            }
            if (flag)
                continue;
            for (int j = 0; j < v.size(); j++)
            {
                if (v[j] == v1[i] + 3)
                {
                    cout << v[j];
                    v.erase(v.begin() + j);
                    flag = true;
                    break;
                }
            }
            if (flag)
                continue;
            for (int j = 0; j < v.size(); j++)
            {
                if (v[j] == v1[i] + 4)
                {
                    cout << v[j];
                    v.erase(v.begin() + j);
                    flag = true;
                    break;
                }
            }
            if (flag)
                continue;
            for (int j = 0; j < v.size(); j++)
            {
                if (v[j] == v1[i] + 5)
                {
                    cout << v[j];
                    v.erase(v.begin() + j);
                    flag = true;
                    break;
                }
            }
            if (flag)
                continue;
            for (int j = 0; j < v.size(); j++)
            {
                if (v[j] == v1[i] + 6)
                {
                    cout << v[j];
                    v.erase(v.begin() + j);
                    flag = true;
                    break;
                }
            }
            if (flag)
                continue;
            for (int j = 0; j < v.size(); j++)
            {
                if (v[j] == v1[i] + 7)
                {
                    cout << v[j];
                    v.erase(v.begin() + j);
                    flag = true;
                    break;
                }
            }
            if (flag)
                continue;
            for (int j = 0; j < v.size(); j++)
            {
                if (v[j] == v1[i] + 8)
                {
                    cout << v[j];
                    v.erase(v.begin() + j);
                    flag = true;
                    break;
                }
            }
            if (flag)
                continue;
            for (int j = 0; j < v.size(); j++)
            {
                if (v[j] == v1[i] + 8)
                {
                    cout << v[j];
                    v.erase(v.begin() + j);
                    flag = true;
                    break;
                }
            }
            if (flag)
                continue;
            for (int j = 0; j < v.size(); j++)
            {
                if (v[j] == v1[i] + 9)
                {
                    cout << v[j];
                    v.erase(v.begin() + j);
                    flag = true;
                    break;
                }
            }
            if (flag)
                continue;
        }
        cout << endl;
    }
}
