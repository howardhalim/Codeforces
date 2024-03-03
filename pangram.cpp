#include <bits/stdc++.h>
using namespace std;
set <char>  ss;
int main(){
	int n;
	cin>>n;
	string s;
	cin>>s;
	int total=0;
	for(int i=0;i<n;i++){
		s[i]=tolower(s[i]);
		if(!ss.count(s[i])){
			ss.insert(s[i]);
			total++;
		}
	}
	if(total==26){
		cout<<"YES\n";
	}
	else cout<<"NO\n";
}