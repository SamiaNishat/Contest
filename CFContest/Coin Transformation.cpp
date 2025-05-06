#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        int result = 0;
        while (n >= 4)
        {
            n = n / 4;
            result++;
        }
        result = pow(2, result);
        cout << result << endl;
    }
}
