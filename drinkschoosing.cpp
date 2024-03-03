#include <bits/stdc++.h>
using namespace std;
int frek[1005];
int main(){
	int n;int x;
	cin>>n>>x;
	int ttl=0;
	int t = n/2;
	t= t + n%2;
	for(int i=0;i<n;i++){
		int c;
		cin>>c;
		frek[c]++;
		if(frek[c]==2 && t>0){
			frek[c]=0;
			ttl+=2;
			t--;
		}
	}
	ttl+=t;
	cout<<ttl<<endl;
}