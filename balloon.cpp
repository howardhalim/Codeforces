#include <bits/stdc++.h>
using namespace std;
int arr[10005];
int main(){
	int n;
	cin>>n;int mn=1e9;int k;
	for(int i=0;i<n;i++){
		cin>>arr[i];
		if(arr[i]<mn){
			mn=arr[i];
			k=i;
		}
	}
	if(n==1){cout<<-1<<endl;}
	else if(n==2){
		if(arr[0]==arr[1]){
			cout<<-1<<endl;
		}
		else cout<<1<<endl<<1<<endl;
	}
	else{
		cout<<1<<endl;
		cout<<k+1<<endl;
	}
}