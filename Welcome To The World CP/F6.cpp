#include <bits/stdc++.h>
using namespace std;

int plusMinus(int arr[], int n)
{
    int count0 = 0, countP = 0, countN = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            count0++;
        }
        else if (arr[i] > 0)
        {
            countP++;
        }
        else
        {
            countN++;
        }
    }
    float ratio0, ratioP, ratioN;
    ratio0 = static_cast<float>(count0) / n;
    ratioP = static_cast<float>(countP) / n;
    ratioN = static_cast<float>(countN) / n;
    cout << fixed << setprecision(6);
    cout << ratioP << endl;
    cout << ratioN << endl;
    cout << ratio0 << endl;
    return 0;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    plusMinus(arr, n);
}