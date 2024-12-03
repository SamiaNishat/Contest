#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n;
    vector<int> a;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        cin >> n;

        for (int i = 0; i < n; i++)
        {
            int input;
            cin >> input;
            a.push_back(input);
        }
        int count0 = 0, count1 = 0, count2 = 0;
        for (int i = 0; i < a.size(); i++)
        {
            if (a[i] % 3 == 0)
            {
                count0++;
            }
            else if (a[i] % 3 == 1)
            {
                count1++;
            }
            else
            {
                count2++;
            }
        }
        int result = count0 + min({count1, count2}) + (count1 - min({count1, count2})) / 3 + (count2 - min({count1, count2})) / 3;
        cout << result << endl;
        a.clear();
    }
}
