#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		n-=1;
		int total = 0;
		while(n--){
			int x;
			cin>>x;
			total+=x;
		}
		cout<<-1*total<<endl;
	}
}