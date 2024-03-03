#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int x;
	int total=0;
	int untreated = 0;
	while(n--){
		cin>>x;
		if(x==-1){
			if(total == 0 ){
				untreated+=1;
			}
			else{
				total--;
			}
		}
		else{
			total+=x;
		}
	}
	cout<<untreated<<endl;
}