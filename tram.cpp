#include <bits/stdc++.h>
using namespace std;
int n;
int main(){
	int mx=0,ttl=0;
	cin>>n;
	for(int i=0;i<n;i++){
		int a,b;
		cin>>a>>b;
		ttl-=a;
		ttl+=b;
		mx=max(ttl,mx);
	}
	cout<<mx<<endl;
}