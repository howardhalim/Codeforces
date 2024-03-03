#include <bits/stdc++.h>
using namespace std;
int main(){
	string s;int kcl=0;
	cin>>s;
	for(int i=0;i<s.size();i++){
		if(s[i]>='a'&&s[i]<='z'){kcl++;}
	}
	int sz = s.size()/2;
	sz= sz + s.size()%2;
	if(kcl >=sz){
		for(int i=0;i<s.size();i++){
			if(s[i]>='A'&&s[i]<='Z'){
				s[i]=(char)((int)s[i] +32);
			}
		}
	}
	else {
		for(int i=0;i<s.size();i++){
			if(s[i]>='a'&&s[i]<='z'){
				s[i]=(char)((int)s[i] -32);
			}
		}
	}
	cout<<s<<endl;
}