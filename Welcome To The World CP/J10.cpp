#include <bits/stdc++.h>
using namespace std;

string timeConversion(string s)
{
    string result = s.substr(0, 8);
    int hour = stoi(s.substr(0, 2));

    if (s[8] == 'A')
    {
        if (hour == 12)
        {
            hour = 0;
        }
    }
    else
    {
        if (hour != 12)
        {
            hour += 12;
        }
    }

    result[0] = (hour / 10) + '0';
    result[1] = (hour % 10) + '0';

    return result;
}
int main()
{
    string s;
    cin >> s;
    cout << timeConversion(s);
    return 0;
}