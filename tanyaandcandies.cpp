#include <bits/stdc++.h>
using namespace std;
int arr[200005];
int pref[200005];
int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>arr[i];
		if(i>1){
			pref[i]=pref[i-2]+arr[i];
		}
		else{
			pref[i]=arr[i];
		}
	}
	int count=0;
	for(int i=0;i<n;i++){
		int x1,x2;
		if(i==0){
			if((n-1)%2==0){
				x1=pref[n-1]-pref[i];
				x2=pref[n-2];
			}
			else{
				x1=pref[n-1];
				x2=pref[n-2]-pref[i];
			}
		}
		else if(i==1){
			if((n-1)%2==1){
				x1=pref[n-1]-pref[i]+pref[i-1];
				x2=pref[n-2]-pref[i-1];
			}
			else{
				x1=pref[n-1]-pref[i-1];
				x2=pref[n-2]-pref[i]+pref[i-1];
			}
		}
		else{
			if((n-1)%2==i%2){
				x1=pref[n-1]-pref[i]+pref[i-1];
				x2=pref[n-2]-pref[i-1]+pref[i-2];
			}
			else{
				x1=pref[n-1]-pref[i-1]+pref[i-2];
				x2=pref[n-2]-pref[i]+pref[i-1];
			}
		}
		if(x1==x2){
			count++;
		}
	}
	cout<<count<<endl;
}