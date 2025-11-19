#include<bits/stdc++.h>
using namespace std;

int a[10005];

int fibb(int n){   // complexity O(n)

   if(n<=1)return n; // base case
   
   if(a[n]==-1)  // precalculation check
     a[n] = fibb(n-1) + fibb(n-2);  // claculation & store
  
   return a[n];  // return
}
int main()
{
    int n;
    cin>>n;
    memset(a,-1,sizeof(a));
    cout<<fibb(n)<<endl;
}
