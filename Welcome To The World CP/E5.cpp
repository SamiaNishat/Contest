#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }

    int diag1 = 0, diag2 = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                diag1 += arr[i][i];
            }
        }
    }
    for (int i = 0, j = n - 1; i < n; i++, j--)
    {

        diag2 += arr[i][j];
    }

    int diff = abs(diag1 - diag2);

    cout << diff << endl;
}