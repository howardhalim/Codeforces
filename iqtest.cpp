#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int temp=0,temp2;int cek=0;
	int y;
	cin>>y;
	if(y%2==0){temp=1;}
	else temp=2;
	cin>>y;
	if(y%2==0){
		temp2=1;
	}
	else temp2=2;

	if(temp==temp2){
		if(temp==1)
		cek =1;
		else cek=2;
	}
	else cek=-1;
	int jwb=0;
	for(int i=0;i<n-2;i++){
		int x;
		cin>>x;
		if(cek == 1 ){
			if(x%2!=0){jwb=i+3;}
		}
		else if(cek==2){
			if(x%2==0){jwb = i+3;}
		}
		else{
			if(x%2==0){
				if(temp==1){
					jwb=2;
				}
				else jwb=1;
				cek=1;
			}
			else{
				if(temp==2){
					jwb=2;
				}
				else jwb=1;
				cek=2;
			}
		}
	}
	cout<<jwb<<endl;
	
}