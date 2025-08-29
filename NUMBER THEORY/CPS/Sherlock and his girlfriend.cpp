#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;
  int p = n + 1;
  int m = n + 2;
  vector<int> v(m);
  v[2] = 1;
  for (int i = 3; i <= p; i += 2)
  {
    v[i] = 1;
  }
  for (int i = 3; i * i <= p; i += 2)
  {
    if (v[i] == 1)
    {
      for (int j = i * i; j < m; j += i)
      {
        v[j] = 0;
      }
    }
  }
  vector<int> prime;
  for (int i = 0; i <= p; i++)
  {
    if (v[i] == 1)
      prime.push_back(i);
  }
  if (prime.size() == n)
    cout << 1 << endl;
  else
    cout << 2 << endl;
  for (int i = 2; i <= p; i++)
  {
    if (v[i] == 1)
      cout << 1 << " ";
    else
      cout << 2 << " ";
  }
  cout << endl;
}
