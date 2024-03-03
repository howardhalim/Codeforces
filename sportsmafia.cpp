#include <bits/stdc++.h>
using namespace std;
int main(){
	long long n,x;
	cin>>n>>x;
	long long lf,rg,mid;
	lf=1;
	rg=n;

	while(lf<rg-1){
	long long a,b,c,d;
		mid= (lf+rg)/2;
		a=mid*(mid+1)/2;
		b=a-(n-mid);
		if(b>=x){
			rg=mid;
		}
		else lf=mid;
	}
	cout<<n-rg<<endl;
}