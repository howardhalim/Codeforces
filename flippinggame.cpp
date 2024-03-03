#include <bits/stdc++.h>
using namespace std;
int m[105],pc[105][5][5],n;

int dp(int x,int y,int z){
//	cout<<x<<" "<<y<<" "<<z<<endl;

	if(x>=n){return 0;}
	else if(z==2){
		int sum=0;
		for(int i=x+1;i<=n;i++){
			sum+=m[i];
		}
		return sum;
	}
	else if(pc[x][y][z] !=-1){return pc[x][y][z];}
	else{
		int &temp = pc[x][y][z];
		if(y==2){
		//	cout<<1<<endl;
			temp = max(temp , dp(x+1,1,1) + 1-m[x+1]);
		//	cout<<2<<endl;
			temp = max(temp , dp(x+1,0,0) + m[x+1]);
		}
		else if(y==1){
			temp = max(temp, dp(x+1,1,1) + 1-m[x+1]);
			temp = max(temp, dp(x+1,0,2) + m[x+1]);
		}
		else if(y==0){
			temp = max(temp , dp(x+1,1,1) + 1-m[x+1]);
			temp = max(temp , dp(x+1,0,0) + m[x+1]);
		}
		//cout<<x<<" "<<y<<" "<<z<<" "<<temp<<endl;
		return temp;
	}
}

int main(){
	cin>>n;
	int cek=0;
	for(int i=1;i<=n;i++){
		cin>>m[i];
		if(m[i]==1){cek++;}
	}
	if(cek==n){cout<<n-1<<endl;return 0;}
	memset(pc,-1,sizeof(pc));
	int jwb;
	jwb = dp(0,2,0);
	 cout<<jwb<<endl;
}