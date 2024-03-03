#include <bits/stdc++.h>
using namespace std;
bool prim[1000005];
void soa(){
	prim[1]=1;
	for(int i=2;i<=1000000;i++){
		if(prim[i]==1)continue;
		prim[i]=0;
		for(int j=i+i;j<=1000000;j+=i){
			prim[j]=1;
		}
	}
}
int main(){
	soa();
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		long long x;
		cin>>x;
		if(sqrt(x)>1000000){
			cout<<"NO\n";
		}
		else{
			if(sqrt(x)==trunc(sqrt(x))){
				int temp = sqrt(x);
				if(prim[temp]==0){
					cout<<"YES\n";
				}
				else{
					cout<<"NO\n";
				}
			}
			else{
				cout<<"NO\n";
			}
		}
	}
}