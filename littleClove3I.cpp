#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int x = n/3;
    int y=n%3;
    if(y==0 && x%3!=0){
        cout<<x<<" "<<x<<" "<<x<<endl;
    }
    else {
        int a,b,c;
        a=1;b=1;c=n-2;
        if(c%3==0){c--; b++;}
        cout<<a<<" "<<b<<" "<<c<<endl;
    }
}
