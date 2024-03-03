#include <bits/stdc++.h>
using namespace std;
double caldist (int ax,int ay, int bx,int by){
	double dist = (double)(bx - ax) * (bx - ax) + (by-ay) * (by-ay);
	dist = sqrt(dist);
	return dist;
}
int main(){
	int t;
	cin>>t;
	cout<<fixed;
	cout<<setprecision(10);
	while(t--){
		int px,py,ax,ay,bx,by;
		cin>>px>>py>>ax>>ay>>bx>>by;
		int ox = 0, oy=0;
		double distoa = caldist(ox,oy,ax,ay);
		double distob = caldist(ox,oy,bx,by);
		double distpa = caldist(px,py,ax,ay);
		double distpb = caldist(px,py,bx,by);
		// cout<<distoa<<endl;
		// cout<<distob<<endl;
		// cout<<distpa<<endl;
		// cout<<distpb<<endl;
		if(distoa <= distob && distpa <= distpb){
			cout<<max(distoa,distpa)<<endl;
		}
		else if(distoa > distob && distpa > distpb){
			cout<<max(distob,distpb)<<endl;
		}
		else{
			double distab = caldist(ax,ay,bx,by);
			double rad = distab / 2.0;
			if(rad < min(distoa, distob) || rad < min(distpa,distpb) ){
				cout<<max(min(distoa,distob), min(distpa,distpb))<<endl;
			}
			else{
				cout<<rad<<endl;
			}
		}
		
	}
}