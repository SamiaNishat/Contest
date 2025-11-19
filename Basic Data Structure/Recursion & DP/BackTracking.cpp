#include<bits/stdc++.h>
using namespace std;

void print(int n,int i){
    if(i==n+1)return; // base case
   
    print(n,i+1); // recursive call

    cout<<i<<endl; // calculation 

}

int main(){
	int n;
	cin>>n;
	print(n,1);
}
