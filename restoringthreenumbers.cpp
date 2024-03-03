#include<bits/stdc++.h>
using namespace std;
int main(){
	int a,b,c,d;
	cin>>a>>b>>c>>d;
	int mx = max(a,b);
	mx = max(mx,c);
	mx = max(mx,d);

	if(mx-a!=0) cout<<mx-a<<endl;
	if(mx-b!=0) cout<<mx-b<<endl;
	if(mx-c!=0) cout<<mx-c<<endl;
	if(mx-d!=0) cout<<mx-d<<endl;
}