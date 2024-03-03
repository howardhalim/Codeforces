#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int arr[n+5],arr2[n+5];
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		sort(arr,arr+n,greater<int>());
		for(int i=0;i<n;i++){
			cin>>arr2[i];
		}
		sort(arr2,arr2+n,greater<int>());
		int j = 0;
		int temp[n+5];
		for(int i=0;i<n;i++){
			while(arr2[i] < arr[j] && (j<n)){
				j++;
			}
			temp[i] = j - i;
		}
		long long total = 1;
		long long md = 10e8+7;
		for(int i=0;i<n;i++){
			total = ((total %md) * (temp[i]%md))%md;
		}
		cout<<total%md<<endl;
	}
}