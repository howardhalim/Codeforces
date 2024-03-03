#include <bits/stdc++.h>
using namespace std;
pair <int,int> p[10005];
int main(){
	int s,n;
	cin>>s>>n;
	for(int i=0;i<n;i++){
		cin>>p[i].first>>p[i].second;
	}
	sort(p,p+n);
	for(int i=0;i<n;i++){
		if(p[i].first<s){
			s+=p[i].second;
		}
		else {
			cout<<"NO\n";
			return 0;
		}
	}
	cout<<"YES\n";
}