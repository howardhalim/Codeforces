#include <bits/stdc++.h>
using namespace std;
int main(){
	int a,b;
	cin>>a>>b;
	int ttl=a;
	int temp;
	while(a>=b){
		temp=a;
		a=a/b;
		ttl += a;
		a+=temp%b;
	}
	cout<<ttl<<endl;
}