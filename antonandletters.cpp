#include <bits/stdc++.h>
using namespace std;
set <char> ss;
int main(){
	string s;
	getline(cin,s);
	int total=0;
	for(int i=0;i<s.size();i++){
		if(s[i]<='z'&&s[i]>='a'){
			if(ss.count(s[i])==0){
				total++;
				ss.insert(s[i]);
			}
		}
	}
	cout<<total<<endl;
}