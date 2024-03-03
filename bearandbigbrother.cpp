#include <bits/stdc++.h>
using namespace std;
int main(){
	int a,b;
	cin>>a>>b;
	for(int i=1;i<=1000;i++){
		if(a*3 > b*2){
			cout<<i<<endl;
			return 0;
		}
		a=a*3;
		b=b*2;
	}
}