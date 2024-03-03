#include<bits/stdc++.h>
using namespace std;
vector < int > v;bool found =0;
int main(){
    int n;int m;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        v.push_back(temp);
    }
    sort(v.begin(),v.end());
    int mx,be,sisa;
    mx=v[n-1]+m;
    int mn;
    be=v[n-1];sisa=m;
    for(int i=0;i<v.size();i++){
        if(sisa>0){
            sisa=sisa- (be-v[i]);
        }
        else found=1;
    }
    if(found ==1){cout<<v[n-1]<<" "<<mx<<endl;}
    else{
        if(sisa>0){
            int tmbh;
            tmbh=sisa/n;
            if(sisa%n!=0){
                tmbh++;
            }
            cout<<v[n-1]+tmbh<<" "<<mx<<endl;
        }
    }

}
