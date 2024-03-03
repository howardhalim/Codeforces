#include<bits/stdc++.h>
using namespace std;
int x[200005];
int main(){
    int n,m;
    cin>>n>>m;
    int sum=0;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        sum=sum+a;
        x[i]=sum/m;
        sum=sum%m;
    }
    for(int i=0;i<n;i++){
            if(i) cout<<" ";
        cout<<x[i];;
    }
    cout<<endl;
}
