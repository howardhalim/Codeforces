#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int arr[n+5];
		int total = 0;
		for(int i=2;i<=n;i++){
			arr[i-1] = i; 
			total+=i;
		}
		int temp = total/n;

		int res = n-(total - n*temp);
		arr[0] = res;
		for(int i=0;i<n;i++){
			cout<<arr[i]<<endl;
		}
	}
}