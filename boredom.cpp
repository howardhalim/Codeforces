#include <bits/stdc++.h>
using namespace std;
long long arr[100005];
long long frek[100005];
long long memo[100005];
long long dp(long long x){
	if(x<1){return 0;}
	if(memo[x]!=-1){
		return memo[x];
	}
	memo[x] =  max(dp(x-1),x*frek[x]+dp(x-2));
	return memo[x];
}

int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>arr[i];
		frek[arr[i]]++;
	}
	sort(arr,arr+n);
	memset(memo,-1,sizeof(memo));
	memo[arr[n-1]]=dp(arr[n-1]);
	cout<<memo[arr[n-1]]<<endl;
}