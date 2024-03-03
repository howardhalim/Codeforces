#include <bits/stdc++.h>
using namespace std;
int main(){
	long long n,k;
	cin>>n>>k;
	long long temp,ans;
	if(n%2==0){
		if(k > n/2){
			temp = k - (n/2);
			ans = (2*temp);
		}
		else{
			ans = (2*k)-1;
		}
	}
	else{
		if(k > n/2 +1 ){
			temp = k - (n/2)-1;
			ans = (2 * temp);
		}
		else{
			ans = (2*k)-1;
		}
	}
	cout<<ans<<endl;
}