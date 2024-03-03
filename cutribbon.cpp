#include <bits/stdc++.h>
using namespace std;
int n,a,b,c;
int memo[50000];
int dp(int x){
	if(x==0){return 0;}
	if(x<0){return -1e9;}
	int &ret = memo[x];
	if(ret!=-1)return ret; 
	else{
		ret= max(max(dp(x-a)+1,dp(x-b)+1),dp(x-c)+1);
	}
	// /cout<<ret<<endl;
	return ret;
}


int main(){
	cin>>n>>a>>b>>c;
	memset(memo,-1,sizeof(memo));
	int total = dp(n);
	cout<<total<<endl;
}