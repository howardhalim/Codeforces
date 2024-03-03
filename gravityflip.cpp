#include <bits/stdc++.h>
using namespace std;

vector <int> v;

int main(){
	int n;
	cin>>n;
	while(n--){
		int x;
		cin>>x;
		v.push_back(x);
	}
	sort(v.begin(),v.end());
	for(int i=0;i<v.size();i++){
		if(i)cout<<" ";
		cout<<v[i];
	}
}