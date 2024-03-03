#include<bits/stdc++.h>
using namespace std;
int arr[1000]; int jw[1000];
int main(){
    int n;
    cin>>n;
    for (int i=1;i<=n;i++){
        cin>>arr[i];
        jw[arr[i]]=i;
    }
    for(int i=1;i<=n;i++){
            if(i>1) cout<<" ";
        cout<<jw[i];
    }
    cout<<endl;
}
