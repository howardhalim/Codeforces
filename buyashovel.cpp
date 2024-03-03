#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,r;
	cin>>n>>r;
	int temp = n;
	for(int i=1;i<=10;i++){
		if(n%10 == r){
			cout<<i<<endl;
			return 0;
		}
		else if(n%10==0){
			cout<<i<<endl;
			return 0;
		}
		else{
			n=n+temp;
		}
	}
	cout<<10<<endl;
}