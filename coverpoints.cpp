#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;int mx=0;
    while(n--){
        int x,y;
        cin>>x>>y;
        mx=max(x+y,mx);
    }
    cout<<mx<<endl;
}
