#include <bits/stdc++.h>
using namespace std;
char arr[55][55];
vector < pair< int,int> > ar,c;
bool vstd1[55][55],vstd2[55][55];
bool found=0;
int r1,c1,r2,c2,n;
void dfs(int x,int y){
	if(x<1||x>n||y<1||y>n){return;}
	if(arr[x][y]=='1'){return;}
	if(!vstd1[x][y]){
		ar.push_back(make_pair(x,y));
		if(x==r2&&y==c2){
			found=1;
		}
		vstd1[x][y]=1;
		dfs(x+1,y);
		dfs(x-1,y);
		dfs(x,y+1);
		dfs(x,y-1);
	}
}
void dfs2(int x,int y){
	if(x<1||x>n||y<1||y>n){return;}
	if(arr[x][y]=='1'){return;}
	if(!vstd2[x][y]){
		c.push_back(make_pair(x,y));
		vstd2[x][y]=1;
		dfs2(x+1,y);
		dfs2(x-1,y);
		dfs2(x,y+1);
		dfs2(x,y-1);
	}	
}


int main(){
	cin>>n;
	cin>>r1>>c1>>r2>>c2;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cin>>arr[i][j];
		}
	}
	dfs(r1,c1);
	if(found){cout<<0<<endl; return 0;}
	dfs2(r2,c2);
	int mn=1e9;
	for(int i=0;i<ar.size();i++){
		for(int j=0;j<c.size();j++){
			int x1,x2,y1,y2;
			x1=ar[i].first;
			x2=c[j].first;
			y1=ar[i].second;
			y2=c[j].second;
			mn=min(mn,(x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
		}
	}
	cout<<mn<<endl;
}