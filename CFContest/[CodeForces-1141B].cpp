// Format
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
   vector< int >a;
    int k = 0;
    for (int i = 0; i < n; i++)
    {
        int num;
        cin>>num;
        a.push_back(num);
        if(num == 0){
            k++;
        }
    }
    if (k == n)
    {
        cout << 0 << endl;
        return 0;
    }
  
    for (int i = 0; i < n; i++)
    {
        
        a.push_back(a[i]);
      
    }
    vector<int> v1;
    int m1 = 0;
    for(int i=1;i<a.size();i++){
        if(a[i-1] != 0 && a[i-1] == a[i]){
           m1++;
           if(a[i] == 0 || a[i+1] == 0){
                v1.push_back(m1);
                m1 = 0;
           }
        }

    }
    if(v1.size() == 0){
        cout << 1 << endl;
        return 0;
    }
   
    cout << *max_element(v1.begin(), v1.end()) + 1 << endl;

}
