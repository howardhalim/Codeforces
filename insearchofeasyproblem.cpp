#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	bool found=0;
	while(n--){
		int x;
		cin>>x;
		if(x==1) found=1;
	}
	if(found){cout<<"HARD\n";}
	else cout<<"EASY\n";
}