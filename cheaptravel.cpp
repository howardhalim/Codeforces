#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m,a,b;
	cin>>n>>m>>a>>b;
	if(b/m < a){

		int times=0;
		if(n>m){
			times = n/m;
			n = n-(m*times);
		}
		int total = b*times;
		if(b < a*n){
			total +=b;
		}
		else{
			total+= (a*n);
		}
		cout<<total<<endl;
	}
	else{
		cout<<a*n<<endl;
	}
}