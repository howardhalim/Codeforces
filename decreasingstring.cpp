#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		long long n;
		cin>>n;
		long long len = s.size();
		long long total = len;
		int count = 0;
		vector<char> resl;
		s+='$';
		for(int i=0;i<s.size();i++){
			if(i){
				while(resl.back() > s[i] && (n > total) && resl.size()>0){
					// cout<<n<<" "<<total<<" "<<resl.back()<<" " << s[i]<<" "<<resl.size()<<endl;

					n-= total;
					total--;
					
					resl.pop_back();
					// cout<<n<<" "<<total<<" "<<resl.back()<<" " << s[i]<<" "<<resl.size()<<endl;

				}
				// cout<<s[i]<<"@";
				resl.push_back(s[i]);
				
			}
			else {
				// cout<<s[i]<<"@";
				resl.push_back(s[i]);
			}
			
		}

		// for(auto a : resl){
		// 	cout<<a;
		// }
		// cout<<endl;
		// cout<<n<<" "<<total<<" "<<resl.back()<<" "<<resl.size()<<endl;

		cout<<resl[n-1];

	}	
}