#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	while(n--){
		int x;
		cin>>x;
		int arr[x+5];
		int odd=0;
		int even = 0;
		for(int i=0;i<x;i++){
			cin>>arr[i];
			if(i%2 != arr[i]%2){
				if(i%2==0){
					even++;
				}
				else{
					odd++;
				}
			}
		}
		if(even==odd){
			cout<<even<<endl;
		}
		else cout<<"-1"<<endl;
	}
}