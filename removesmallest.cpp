#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int arr[n+3];
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		sort(arr,arr+n);
		bool found = 0 ;
		for(int i=1;i<n;i++){
			if(arr[i] - arr[i-1] > 1){
				cout<<"NO\n";
				found = 1;
				break;
			}
		}
		if(!found) cout<<"YES\n";
	}

}