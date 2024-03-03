#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            int x;
            cin>>x;
            if(x==1){
                a=i;b=j;
            }
        }
    }
    int y;
    y=abs(a-2)+abs(b-2);
    cout<<y<<endl;
}
