#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int m, a, b, c;

    for (int i = 0; i < t; i++)
    {
        int seat = 0;
        cin >> m >> a >> b >> c;
        int seatA = min(m, a);
        int seatB = min(m, b);
        int seatC = min((2 * m - seatA - seatB), c);
        seat = seatA + seatB + seatC;
        cout << seat << endl;
    }
}