#include<bits/stdc++.h>
using namespace std;
int main(){
    bool found=0;
        string s1,s2;
        cin>>s1>>s2;
        int x=s2.size()-1;
        for(int i=0;i<s1.size();i++){
                if(s1[i]!=s2[x-i]){
                    found=1; break;
                }
        }
        if(found){cout<<"NO\n";}
        else cout<<"YES\n";
}
