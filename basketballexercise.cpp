#include <bits/stdc++.h>
using namespace std;
int t1[100005],t2[100005],n;
long long memo[100005][4];

long long dp ( int x,int y){
	if ( x > n ) {return 0;}
	else if(memo[x][y] !=-1) {return memo[x][y];}
	else{
		long long &temp = memo[x][y]; 
		if(y==0){
			temp=max(dp((x+1),1)+t1[x+1] , dp((x+1),2)+t2[x+1]);
		}
		else if(y==1){
			temp= max(dp((x+1),0), dp((x+1),2)+t2[x+1]);
		}
		else if(y==2){
			temp= max(dp((x+1),0), dp((x+1),1)+t1[x+1]);
		}
		return temp;
	}
}

int main(){
	cin>>n;
	for(int i = 1 ;i <= n;i++){
		cin>>t1[i];
	}
	for(int i=1;i<=n;i++){
		cin>>t2[i];
	}
	memset(memo,-1,sizeof(memo));
	cout<<dp(0,0)<<endl;

}