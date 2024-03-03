#include<bits/stdc++.h>
using namespace std;
vector < int > v;
int main(){
    int n,m;
    cin>>n>>m;
    for(int i=0;i<m;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    int beda,mn;
    mn=999999999;
    for(int i=0;i<m-n+1;i++){
            beda=v[i+n-1]-v[i];
        mn=min(mn,beda);
    }
    cout<<mn<<endl;
}
