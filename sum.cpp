#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int a,b,c;
		cin>>a>>b>>c;
		int mx = max(a,b);
		mx = max(mx,c);
		bool found = 0;
		if(mx==a){
			if(b+c == a){
				found = 1;
			}
		}
		else if(mx==b){
			if(a+c == b){
				found = 1;
			}
		}
		else if(mx==c){
			if(a+b==c){
				found = 1;
			}
		}
		if(found) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
}