#include<bits/stdc++.h>
using namespace std;
vector < int > v; int p;
int main(){
    int n;
    p=-1;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    sort(v.rbegin(),v.rend());
    int temp; temp=v[0];
    if(temp > v[1]){
            p=0;
        }
    for(int i=1;i<n-1;i++){
        temp=__gcd(temp,v[i]);
        if(temp > v[i+1]){
            p=i;
        }
    }
    if(p==-1){cout<<-1<<endl;}
    else if(p>=0)cout<<n-p-1<<endl;
}
