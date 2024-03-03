#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int mx,mn;
	mx = 0;
	mn = 99999999;
	int idmn=0,idmx=0;
	for(int i=0;i<n;i++){
		int x;
		cin>>x;
		if(mx < x){
			mx = x;
			idmx = i;
		}
		if(mn >= x){
			mn = x;
			idmn = i;
		}
	}
	if(idmn < idmx ){
		cout<<idmx+n-idmn-2<<endl;
	}
	else cout<<idmx+n-idmn-1<<endl;
}