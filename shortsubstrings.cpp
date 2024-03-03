#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	while(n--){
		string s;
		cin>>s;
		string res = "";
		res+=s[0]; for(int i=1;i<=s.size();i+=2){
			res+=s[i];
		}
		cout<<res<<endl;
	}
}