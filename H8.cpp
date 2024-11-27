#include <bits/stdc++.h>
using namespace std;

int miniMaxSum(long long arr[5])
{
    long long sum1 = arr[0] + arr[1] + arr[2] + arr[3];
    long long sum2 = arr[0] + arr[1] + arr[2] + arr[4];
    long long sum3 = arr[0] + arr[1] + arr[3] + arr[4];
    long long sum4 = arr[0] + arr[2] + arr[3] + arr[4];
    long long sum5 = arr[1] + arr[2] + arr[3] + arr[4];
    if (sum1 < sum2 && sum1 < sum3 && sum1 < sum4 && sum1 < sum5)
    {
        cout << sum1 << " ";
    }
    else if (sum2 < sum1 && sum2 < sum3 && sum2 < sum4 && sum2 < sum5)
    {
        cout << sum2 << " ";
    }
    else if (sum3 < sum1 && sum3 < sum2 && sum3 < sum4 && sum3 < sum5)
    {
        cout << sum3 << " ";
    }
    else if (sum4 < sum1 && sum4 < sum2 && sum4 < sum3 && sum4 < sum5)
    {
        cout << sum4 << " ";
    }
    else
    {
        cout << sum5 << " ";
    }

    if (sum1 > sum2 && sum1 > sum3 && sum1 > sum4 && sum1 > sum5)
    {
        cout << sum1;
    }
    else if (sum2 > sum1 && sum2 > sum3 && sum2 > sum4 && sum2 > sum5)
    {
        cout << sum2;
    }
    else if (sum3 > sum1 && sum3 > sum2 && sum3 > sum4 && sum3 > sum5)
    {
        cout << sum3;
    }
    else if (sum4 > sum1 && sum4 > sum2 && sum4 > sum3 && sum4 > sum5)
    {
        cout << sum4;
    }
    else
    {
        cout << sum5;
    }
    return 0;
}

int main()
{
    long long arr[5];
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }
    miniMaxSum(arr);
}