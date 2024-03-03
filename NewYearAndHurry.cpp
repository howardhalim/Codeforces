#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,k;
	cin>>n>>k;

	int time_left = 240 - k;

	for(int i=1;i<=n;i++){
		if(time_left - 5*i >= 0 ){
			time_left-=  5*i;
		}
		else{
			cout<<i-1<<endl;
			return 0;
		}
	}
	cout<<n<<endl;



}