#include <bits/stdc++.h>
using namespace std;
int arr[300005],a[300005],b[300005];
int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	for(int i=0;i<n-1;i++){
		cin>>a[i];
	}
	for(int i=0;i<n-2;i++){
		cin>>b[i];
	}
	sort(arr,arr+n);
	sort(a,a+n-1);
	sort(b,b+n-2);
	int ans1,ans2;
	for(int i=0;i<n;i++){
		if(arr[i]!=a[i]){
			ans1=arr[i];
			break;
		}
	}
	for(int i=0;i<n-1;i++){
		if(a[i]!=b[i]){
			ans2=a[i];
			break;
		}
	}
	cout<<ans1<<endl<<ans2<<endl;
}