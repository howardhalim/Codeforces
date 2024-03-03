#include <bits/stdc++.h>
using namespace std;
bool cek[1000005];
int main(){
	int n;
	cin>>n;
	int x;
	cin>>x;
	for(int i=0;i<x;i++){
		int a;
		cin>>a;
		cek[a]=1;
	}
	int y;
	cin>>y;
	for(int i=0;i<y;i++){
		int a;
		cin>>a;
		cek[a]=1;
	}
	for(int i=1;i<=n;i++){
		if (cek[i]!=1){
			cout<<"Oh, my keyboard!\n";
			return 0;
		}
	}
	cout<<"I become the guy.\n";
}