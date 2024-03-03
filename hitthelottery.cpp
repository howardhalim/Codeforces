#include <bits/stdc++.h>
using namespace std;

unordered_map <int,int> memo;

int dp(int x){
	if(x<0){
		return 999999999;
	}
	else if(x==0){
		return 0;
	}
	if(memo.count(x) == 1){
		return memo[x];
	}
	int &ret = memo[x];
	if(x>=100){
		ret = dp(x%100) + x/100;
	}
	else if(x>= 20){
		ret = dp(x-20)+1;
	}
	else if(x>=10){
		ret = dp(x-10)+1;
	}
	else if(x>=5){
		ret = dp(x-5)+1;
	}
	else{
		ret = dp(x-1)+1;
	}
	return ret;
}

int main(){
	int n;
	cin>>n;
	cout<<dp(n)<<endl;
}