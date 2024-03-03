#include <bits/stdc++.h>
using namespace std;
int pos,neg;
int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		int x;
		cin>>x;
		if(x>0){pos++;}
		else if(x<0){neg++;}
	}
	int x = n/2;
	if(n%2==1){x++;}
	if(pos>=x){cout<<1<<endl;}
	else if(neg>=x){cout<<-1<<endl;}
	else cout<<0<<endl;
}