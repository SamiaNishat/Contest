#include <bits/stdc++.h>
// #include<iostream>
// #include<iomanip>
using namespace std;

int main()
{
    string t1, t2;

    cin >> t1;
    cin >> t2;

    int h1, h2, m1, m2, h3, m3;

    h1 = stoi(t1.substr(0, 2));
    h2 = stoi(t2.substr(0, 2));
    m1 = stoi(t1.substr(3, 2));
    m2 = stoi(t2.substr(3, 2));

    int totalMinutes1 = h1 * 60 + m1;
    int totalMinutes2 = h2 * 60 + m2;
    int midMinutes = (totalMinutes1 + totalMinutes2) / 2;

    h3 = midMinutes / 60;
    m3 = midMinutes % 60;

    cout << setw(2) << setfill('0') << h3 << ":" << setw(2) << setfill('0') << m3;
}