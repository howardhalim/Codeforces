#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		int t1 = 0;
		int t2 = 0;
		for(int i=0;i<s.size();i++){
			if(i<3){
				t1 += int(s[i]);
			}
			else{
				t2 +=int(s[i]);
			}
		}
		if(t1 == t2){
			cout<<"YES\n";
		}
		else{
			cout<<"NO\n";
		}
	}
}