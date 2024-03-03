#include <bits/stdc++.h>
using namespace std;
int arr[100005];
int main(){
	int n,x;
	cin>>n>>x;
	bool balek=0;
	if(x<0){balek=1;}
	int mn,a,b,sum=0;mn=1e9;a=0;b=0;
	int ia,ib; 
	for(int i=0;i<n;i++){
		cin>>arr[i];
		if(i==0){
			sum+=arr[i];
			mn=arr[i];
			a=i;
			b=i;
		} 	
		else{
			if(balek){
				if(arr[i] < sum+arr[i]){
					a=i;
					b=i;
					sum=arr[i];
				}
				else{
					b=i;
					sum+=arr[i];
				}
			}
			else{
				if(arr[i]>sum+arr[i]){
					a=i;b=i;
					sum=arr[i];
				}
				else{
					b=i;
					sum+=arr[i];
				}
			}

			if(balek){
				if(mn > sum){
					mn = sum ;
					ia=a;
					ib=b;
				}
			}
			else{
				if(mn < sum){
					mn = sum;
					ia=a;
					ib=b;
				}
			}
		}
	}
	
	for(int i=0;i<n;i++){
		if(i<ia&&i>ib){
			total+=arr[i];
		}
	}
}