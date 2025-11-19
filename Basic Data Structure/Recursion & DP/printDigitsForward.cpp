#include<bits/stdc++.h>
using namespace std;

void printDigits(int n){
	if(n==0)return;  // base case

	printDigits(n/10);  // recursive call

	cout<<n%10<<endl; // print
}

int main(){
	int n;
	cin>>n;
	printDigits(n);
}
