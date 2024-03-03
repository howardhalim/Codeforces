#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	string s;
	cin>>s;
	int tmp;
	tmp = n-11;
	tmp=tmp/2;
	int sum=0;
	for(int i=1;i<2*tmp +1;i++){
		if(s[i]=='8'){sum++;}
	}
	if(sum >= tmp ){
		cout<<"YES\n";
	}
	else cout<<"NO\n";
}