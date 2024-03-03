#include <bits/stdc++.h>
using namespace std;

map <string,int> mp;

int main(){
	int n;
	cin>>n;
	while(n--){
		string x;
		cin>>x;
		if(mp.count(x)==0){
			cout<<"OK\n";
			mp[x]++;
		}
		else{
			cout<<x<<mp[x]<<endl;
			mp[x]++;
		}
	}
}