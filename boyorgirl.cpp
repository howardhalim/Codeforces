#include <bits/stdc++.h>
using namespace std;
set <char> ar;
int main(){
	string s;
	cin>>s;
	for(int i=0;i<s.size();i++){
		if(ar.count(s[i])==0){
			ar.insert(s[i]);
		}
	}
	if(ar.size()%2==0){
		cout<<"CHAT WITH HER!\n";
	}
	else cout<<"IGNORE HIM!\n";
}