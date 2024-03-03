#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    int d;
    d=__gcd(a,b);
    if(c%d==0){
        cout<<"Yes\n";
    }
    else cout<<"No\n";
}
