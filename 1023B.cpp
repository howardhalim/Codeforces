#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n,k;
    cin>>n>>k;
    if(n>=k-1){
        cout<<(k-1)/2<<endl;
    }
    else if(n+n-1<k){
        cout<<0<<endl;
    }
    else{
        cout<<(k-1)/2 -(k-n-1)<<endl;
    }
}
