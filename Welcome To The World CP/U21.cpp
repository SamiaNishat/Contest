#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v.at(i);
    }
    auto it = max_element(v.begin(),v.end());
    for (int i = 0; i < n-1; i++)
    {
        // if (v.at(i) > v.at(i + 1))
        // {
        //     v.at(i) = v.at(i) - v.at(i + 1);
        // }
        // it = *it - v.at(i);
    }
    int sum=0;
    for (int i = 0; i < n; i++)
    {
        sum += v.at(i);
    }
    cout<<sum;
}