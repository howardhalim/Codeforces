#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,v;
	cin>>n>>v;
	int total = 0;
	int harga = 0;
	total = min(n-1,v);
	harga = min(n-1,v);
	int dif=0;
	if(total< n-1){
		dif = n-total-1;
	}
	dif++;
	harga += (dif+1)*dif/2-1;
	cout<<harga<<endl;
}