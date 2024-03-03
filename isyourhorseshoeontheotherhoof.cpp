#include <bits/stdc++.h>
using namespace std;
set<int> s;
int main(){
	int s1,s2,s3,s4;
	cin>>s1>>s2>>s3>>s4;
	int total=0;
	s.insert(s1);
	if(!s.count(s2)) {
		s.insert(s2);
	}
	else{
		total++;
	}
	if(!s.count(s3)) {
		s.insert(s3);
	}
	else total++;
	if(!s.count(s4)) {
		s.insert(s4);
	}
	else total++;
	cout<<total<<endl;
}