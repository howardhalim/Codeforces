#include<bits/stdc++.h>
using namespace std;
int main(){
	int a,b;
	cin>>a>>b;
	if(a<b){
		int temp = b;
		b = a;
		a = temp;
	}
	cout<<b<<" "<<(a-b)/2<<endl;
}