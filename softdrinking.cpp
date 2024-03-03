#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,k,l,c,d,p,nl,np;
	cin>>n>>k>>l>>c>>d>>p>>nl>>np;

	int drink,limes;
	drink = k*l;
	limes = c*d;
	int s1,s2,s3;
	s1 = drink/ (n*nl);
	s2 = limes/ (n*1);
	s3 = p / (n*np);
	int mn = min(s1,s2);
	mn = min(mn,s3);
	cout<<mn<<endl;
}