#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		if((n < 7) || (n == 9)){
			cout<<"NO\n";
		} 
		else{
			cout<<"YES\n";
			int a =0;
			int b,c;
			int rem = 0;
			bool found = 0;
			int i = 1;
			while(!found){
				a = 1;
			 	rem = n-a;
			 	if(rem%2==0){
			 		b=rem/2 - i;
			 		c = rem/2 +i;
			 	}
			 	else{
			 		b = rem/2 - i + 1;
			 		c = rem/2 + i;
			 	}
			 	if(a %3 != 0 && b%3!=0 && c%3!=0){
			 		found = 1;
			 	}
			 	i++;
			}
			cout<<a<<" "<<b<<" "<<c<<endl;
			

		}
	}
}