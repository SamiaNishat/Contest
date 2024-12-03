#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n;
    cin >> n;
    string s = to_string(n);
    int sum = 0;
    for (int i = 0; i < s.length(); i++)
    {
        // if (s[i] == '4' || s[i] == '7')
        if (s[i] - '0' == 4 || s[i] - '0' == 7)
        {
            sum = sum + 1;
        }
    }
    if (sum == 4 || sum == 7)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}