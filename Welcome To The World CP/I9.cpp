#include <bits/stdc++.h>
using namespace std;

int birthdayCakeCandles(int candles[], int n)
{
    int tallest = candles[0];
    for (int i = 1; i < n; i++)
    {
        if (candles[i] > tallest)
        {
            tallest = candles[i];
        }
    }

    int howMany = 0;
      for (int i = 0; i < n; i++)
    {
      if (candles[i] == tallest)
        {
            howMany++;
        }
    }
    cout << howMany;
    return 0;
}

int main()
{
    int n;
    cin >> n;
    int candles[n];
    for (int i = 0; i < n; i++)
    {
        cin >> candles[i];
    }
    birthdayCakeCandles(candles,n);
}