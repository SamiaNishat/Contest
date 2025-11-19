#include<bits/stdc++.h>
using namespace std;

void printDigits(int n){
	if(n==0)return; // base case

	cout<<n%10<<endl; // print

	printDigits(n/10); // recursive call
}

int main(){
	int n;
	cin>>n;
	printDigits(n);
}
