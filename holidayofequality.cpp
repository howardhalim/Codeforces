#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int arr[n+5];
	int mx = -1;
	for(int i=0;i<n;i++){
		cin>>arr[i];
		mx = max(mx,arr[i]);
	}
	int total = 0;
	for(int i=0;i<n;i++){
		total+=(mx-arr[i]);
	}
	cout<<total<<endl;
}