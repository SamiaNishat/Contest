#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    cin.ignore(); // Ignore the newline character after reading t
    // cin.ignore() is used to ignore the newline character left in the input buffer after reading t
    while (t--)
    {
        string s;
        getline(cin, s);

        cout << s[0];

        for (int i = 1; i <= s.length(); i++)
        {
            
            if (s[i] == ' ')
            {
                cout << s[i + 1];
            }
        }
        cout << endl;
    }
}
