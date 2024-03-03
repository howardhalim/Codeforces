#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int x,y,n;
		cin>>x>>y>>n;
		int temp = n%x;
		int res = x*((n/x) );
		if(temp >= y){
			res +=y;
		}
		else{
			res = res - x + y;
		}
		cout<<res<<endl;
	}
}