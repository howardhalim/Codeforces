#include <bits/stdc++.h>
using namespace std;
int main(){
	int x;
	cin>>x;
	char y=' ';
	int ttl=0;
	for(int i=0;i<x;i++){
		string a;
		cin>>a;
		if(y!=a[0]){
			ttl++;
			y=a[0];
		}
	}
	cout<<ttl<<endl;
}