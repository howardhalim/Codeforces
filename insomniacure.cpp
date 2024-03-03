#include<bits/stdc++.h>
using namespace std;
int arr[100005];
int main(){
     int a,b,c,d,k;
     cin>>a>>b>>c>>d>>k;
     int sum=k;
     for(int i=1;i<=k;i++)
     {
         if(i%a==0&&arr[i]==0){arr[i]=1; sum--;}
         if(i%b==0&&arr[i]==0){arr[i]=1; sum--;}
         if(i%c==0&&arr[i]==0){arr[i]=1; sum--;}
         if(i%d==0&&arr[i]==0){arr[i]=1; sum--;}
     }
     cout<<k-sum<<endl;
}
