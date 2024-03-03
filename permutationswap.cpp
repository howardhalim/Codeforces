#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int arr[n+5],diff[n+5];
		for(int i=0;i<n;i++){
			cin>>arr[i];
			diff[i] = abs(arr[i]-i-1);
		}
		int ans = -1;
		for(int i=0;i<n;i++){
			if(diff[i] !=0){
				if(ans == -1){
					ans = diff[i];
				}
				else ans = __gcd(diff[i],ans);
			}	
		}
		cout<<ans<<endl;

	}
}