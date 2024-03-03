#include <bits/stdc++.h>
using namespace std;
int m,s;
string a,b;

int main(){
	cin>>m>>s;
	if(m==0){
		cout<<"-1 -1\n";
		return 0;
	}
	else if(m==1){
		if(s<10){
			cout<<s<<" "<<s<<endl;
		}
		else {
			cout<<"-1 -1\n";
		}
		return 0;
	}
	else if(m>1&&s==0){
		cout<<"-1 -1\n";
		return 0;
	}
	else{
		for(int i=0;i<m;i++){
			int t = min(s,9);
			b+=(t+'0');
			s-=t;
		}
		if(s>0){
			cout<<"-1 -1\n";
			return 0;
		}
		for(int i=m-1;i>=0;i--){
			a+=b[i];
		}
		int i;
		for( i=0;a[i]=='0';i++);
			a[i]--;a[0]++;
		cout<<a<<" "<<b<<endl;
	}
}