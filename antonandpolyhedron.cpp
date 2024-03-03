#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int total=0;
	while(n--){
		string x;
		cin>>x;
		if(x=="Icosahedron"){
			total+= 20;
		}
		else if(x=="Cube"){
			total+= 6;
		}
		else if(x=="Dodecahedron"){
			total+= 12;
		}
		else if(x=="Tetrahedron"){
			total+= 4;
		}
		else if(x=="Octahedron"){
			total+= 8;
		}
	}
	cout<<total<<endl;
}