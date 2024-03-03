#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	string s;
	cin>>n>>s;
	int a,b;
	bool found=0;
	for(int i=0;i<s.size()-1;i++){
		if(s[i]>s[i+1]){
			a=i+1;
			b=i+2;
			found=1;
		}
		if(found)break;
	}
	if(found){
		cout<<"YES\n";
		cout<<a<<" "<<b<<endl;
	}
	else cout<<"NO\n";

}