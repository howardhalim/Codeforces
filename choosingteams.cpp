#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,k;
	cin>>n>>k;
	int total=0;
	while(n--){
		int x;
		cin>>x;
		if(5-x>=k) total++;
	}

	cout<<total/3<<endl;
}