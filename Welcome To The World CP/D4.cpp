#include <bits/stdc++.h>
using namespace std;

int compareTriplets(int a[3], int b[3])
{
     int score[2] = {0, 0};
    for (int i = 0; i < 3; i++)
    {
        if (a[i] == b[i])
        {
            continue;
        }
        else if (a[i] > b[i])
        {
            score[0]++;
        }
        else if (a[i] < b[i])
        {
            score[1]++;
        }
    }
    for (int i = 0; i < 2; i++)
    {
        cout << score[i] << " ";
    }
    return 0;
}

int main()
{
    int a[3], b[3];
    for (int i = 0; i < 3; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < 3; i++)
    {
       cin >> b[i];
    }
    compareTriplets(a, b);
}