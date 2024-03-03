#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	vector<int> v1,v2,v3;
	for(int i=1;i<=n;i++){
		int x;
		cin>>x;
		if(x==1){
			v1.push_back(i);
		}
		else if(x==2){
			v2.push_back(i);
		}
		else if(x==3){
			v3.push_back(i);
		}
	}
	int mn = min(v1.size(),v2.size());
	int v3size = v3.size();
	mn = min(mn,v3size);

	cout<<mn<<endl;
	for(int i=0;i<mn;i++){
		cout<<v1[i]<<" " <<v2[i]<<" "<<v3[i]<<endl;
	}
}