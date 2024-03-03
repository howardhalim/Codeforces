#include <bits/stdc++.h>
using namespace std;
long long arr[1000005];
long long dif[1000005];
int main(){
	int n,m;
	cin>>n>>m;
	long long gcd,y;
	for(int i=0;i<n;i++){
		cin>>arr[i];
		if(i>0){
			dif[i-1]= arr[i]-arr[i-1];
		}
	}
	for(int i=0;i<n-1;i++){
		if(i==0){
			gcd= dif[i];
		}
		else{
			gcd = __gcd(dif[i],gcd);
		}
	}
	int ans=-1;
	for(int i=0;i<m;i++){
		long long p;
		cin>>p;
		if(__gcd(gcd,p) == p){
			ans = i+1;
		}
	}
	y= arr[0];
	if(ans==-1){cout<<"NO\n";}
	else {
		cout<<"YES\n";
		cout<<y<<" "<<ans<<endl;
	}
}