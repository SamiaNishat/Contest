#include<bits/stdc++.h>
using namespace std;

vector<int> coins = {5,12,23};  // m = vector size / number of coin 
int dp[100005];
int isPossible(int n){   //Time complexity  O(m*n)
    if(n<0)return 0;
    if(n==0)return 1;

    if(dp[n]!=-1)return dp[n];
    
    int res = 0;
    for(int coin : coins){
    	if(isPossible(n-coin)){
    		res = 1;

    	}
    }
         dp[n]=res;
    	 return res;   
}

int main(){
    int n;
    cin>>n;
    memset(dp,-1,sizeof(dp));
    cout<<isPossible(n);
}
