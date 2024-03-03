#include<bits/stdc++.h>
using namespace std;
int frek[10];
bool found=0;
int main(){
    int n;
    cin>>n;
    while(!found){
        n++;int temp =n;
        memset(frek,0,sizeof(frek));
        found =1;
        for(int i=0;i<4;i++){
            int dum=temp%10;
            frek[dum]++;
            if(frek[dum]>1){found =0; break;}
            temp/=10;
        }
        if(found ){ cout<<n<<endl; break;}
    }

}
