#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	int arr[1005];
	int set = 1;
	for(int i=1;i<=1000;i++){
		while(set%3==0 || set%10==3){
			set++;
		}
		arr[i] = set;
		set++;
	}
	while(t--){
		int n;
		cin>>n;
		cout<<arr[n]<<endl;
	}
}