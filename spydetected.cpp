#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int arr[n+5];
		int spy = -1;
		for(int i=0;i<n;i++){
			cin>>arr[i];
			if(i==0) continue;

			if(arr[i-1] != arr[i]){
				spy = i-1;
			}
			if(i==n-1 && spy==i-1){
				if(arr[i] !=arr[0]){
					spy=i;
				}
			}
		}
		cout<<spy+1<<endl;
	}
}