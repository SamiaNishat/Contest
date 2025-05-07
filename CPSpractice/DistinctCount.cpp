#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin >> t;   
	while(t--){
		  int n, x;
        cin >> n >> x;
        set<int> v;
        while (n--)
        {
            int num;
            cin >> num;
            v.insert(num);
        }
		if(v.size()>x){
			cout<<"Average"<<endl;
		}
		else if(v.size()==x){
			cout<<"Good"<<endl;
		}
		else if(v.size()<x){
			cout<<"Bad"<<endl;
		}
	}
}
