#include <bits/stdc++.h>
using namespace std;
int frek[1000];
int frekk[1000];
int main(){
	string s1,s2,s;
	cin>>s1>>s2>>s;
	for(int i=0;i<s1.size();i++){
		frek[s1[i]]++;
	}
	for(int i=0;i<s2.size();i++){
		frek[s2[i]]++;
	}
	for(int i=0;i<s.size();i++){
		frekk[s[i]]++;
	}
	bool found = 0;
	for(char i = 'A'; i<='Z';i++){
		if(frek[i]!=frekk[i]){
			found = 1;
		}
	}
	if(found==1){
		cout<<"NO\n";
	}
	else cout<<"YES\n";
}