#include<bits/stdc++.h>
using namespace std;

int pw(int x,int y){
	if(y==0) return 1;
	return x*pw(x,y-1);
}

int main(){
	int n;
	cin>>n;
	while(n--){
		int x,temp;
		cin>>x;
		temp = x;
		int res = 0;
		while(x>0){
			int rem = x%10;
			if(rem==0){
				res--;
			}

			x = x /10;
			res++;
		}

		cout<<res<<endl;
		int zeros = 0;
		while(temp>0){
			int rem = temp%10;
			if(rem==0){
				zeros+=1;
			}
			else{
				int prt = rem*(pw(10,zeros));
				cout<<prt<<endl;
				zeros+=1;
			}
			temp/=10;
		}
	}
}