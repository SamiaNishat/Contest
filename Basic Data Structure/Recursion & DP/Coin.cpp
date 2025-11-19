#include<bits/stdc++.h>
using namespace std;

vector<int> coins = {5,12,23};  // m = vector size / number of coin 
int isPossible(int n){   //Time complexity  O(m^n)
    if(n<0)return 0;
    if(n==0)return 1;

    for(int coin : coins){
    	if(isPossible(n-coin)){
    	 return 1;
    	}
    }

    return 0;
    
}

int main(){
    int n;
    cin>>n;
    cout<<isPossible(n);
}
