#include <bits/stdc++.h>
using namespace std;

vector <pair <int,int> > arr;

int main(){
	int n;
	cin>>n;
	for(int i=1;i<=2*n;i++){
		int x;
		cin>>x;
		arr.push_back(make_pair(x,i));
	}
	sort(arr.begin(),arr.end());
	int a,b;a=1;b=1;
	long long total=0;
	for(int i=0;i<n;i++){
		if(abs(a-arr[2*i].second)+abs(b-arr[2*i+1].second)>abs(a-arr[2*i+1].second)+abs(b-arr[2*i].second)){
			total+=(long long)(abs(a-arr[2*i+1].second)+abs(b-arr[2*i].second));
			a=arr[2*i+1].second;
			b=arr[2*i].second;
		}
		else{
			total+=(long long)(abs(b-arr[2*i+1].second)+abs(a-arr[2*i].second));
			b=arr[2*i+1].second;
			a=arr[2*i].second;				
		}
	}
	cout<<total<<endl;
}