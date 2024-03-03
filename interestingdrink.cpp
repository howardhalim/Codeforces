#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int x[n+5];
	for(int i=0;i<n;i++){
		cin>>x[i];
	}
	int arr[100005];
	memset(arr,0,sizeof(arr));
	for(int i=0;i<n;i++){
		arr[x[i]]++;
	}
	for(int i=0;i<100005;i++){
		arr[i] = arr[i-1] + arr[i];
	}
	int q;
	cin>>q;
	while(q--){
		int m;
		cin>>m;
		if(m>100000){
			cout<<n<<endl;
		}
		else{
			cout<<arr[m]<<endl;
		}
	}
}