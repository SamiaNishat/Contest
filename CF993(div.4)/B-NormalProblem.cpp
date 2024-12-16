#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    string a;
    for (int j = 0; j < t; j++)
    {
        cin >> a;

        vector<char> v;
        for (int i = 0; i < a.size(); i++)
        {
            v.push_back(a.at(i));
        }
        for (int i = 0; i < v.size(); i++)
        {
            if (v.at(i) == 'p')
            {
                v.at(i) = 'q';
            }
            else if (v.at(i) == 'q')
            {
                v.at(i) = 'p';
            }
        }
        reverse(v.begin(), v.end());

        for (int i = 0; i < v.size(); i++)
        {
            cout << v.at(i);
        }
        cout << endl;
    }
}