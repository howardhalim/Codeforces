#include<bits/stdc++.h>
using namespace std;
bool x[300];
vector < int > fn;
int main(){
    int n,m;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        int l,r;
        cin>>l>>r;
        for(int j=l;j<=r;j++){
            x[j]=1;
        }
    }
    for(int i=1;i<=m;i++){
        if(!x[i]){
            fn.push_back(i);
        }
    }
    cout<<fn.size()<<endl;
    for(int i=0;i<fn.size();i++){
            if(i) cout<<" ";
        cout<<fn[i];
    }
    cout<<endl;
}
