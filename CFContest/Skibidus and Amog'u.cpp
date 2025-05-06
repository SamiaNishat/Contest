#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        string w;
        cin >> w;
        vector<char> ww;
        for (int i = 0; i < w.length() - 2; i++)
        {
            ww.push_back(w[i]);
        }
        ww.push_back('i');
        for (int i = 0; i < ww.size(); i++)
        {
            cout << ww.at(i);
        }
        cout<<endl;
    }
}
