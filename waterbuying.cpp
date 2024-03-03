#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	while(n--){
		long long N,a,b;
		cin>>N>>a>>b;
		if(N==1){
			cout<<a<<endl;
		}
		else if(2*a<=b){
			cout<<a*N<<endl;
		}
		else{
			long long sum=0;
			sum= N/2*b;
			if(N%2==1){sum+=a;}
			cout<<sum<<endl;
		}
	}
}