#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin >>n;
    long long sum;
    if(n%2==0){
        cout<<n/2<<endl;
    }
    else{
        n++;
        cout<<-(n/2)<<endl;
    }
}
