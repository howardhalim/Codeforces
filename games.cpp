#include <bits/stdc++.h>
using namespace std;

struct game{
	int home,away;
};

int main(){
	int n;
	cin>>n;
	game x[1005];
	for(int i=0;i<n;i++){
		cin>>x[i].home>>x[i].away;
	}
	int count = 0;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(x[i].away == x[j].home && i!=j){
				count++;
			}
		}
	}
	cout<<count<<endl;
}