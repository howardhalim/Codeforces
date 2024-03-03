#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n; int mx=0,temp=0, maxi=1;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        if(x>=temp){mx++;maxi=max(maxi,mx);}
        else mx=1;
        temp=x;
    }
    cout<<maxi<<endl;
}
