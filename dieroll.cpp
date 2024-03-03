#include <bits/stdc++.h>
using namespace std;
int main(){
	int y,w;
	cin>>y>>w;
	int mx = max(y,w);

	int rem = 6-mx + 1;
	int z = __gcd(rem,6);
	int num = rem / z;
	int dem = 6/z;

	cout<<num<<"/"<<dem<<endl;
}