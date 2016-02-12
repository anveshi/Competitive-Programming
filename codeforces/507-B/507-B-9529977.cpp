#include<bits/stdc++.h>
#define lol long long int
#define ulol unsigned long long int 
#define mp make_pair
#define pb push_back
#define ff first
#define ss second
using namespace std;
long double  dist(lol a,lol b,lol aa,lol bb){
	return (sqrt((aa-a)*(aa-a)+(bb-b)*(bb-b)));
}
int main(){
	lol x,y,xx,yy,r,ans;
	long double d;
	cin>> r >> x >> y >> xx >> yy;
	d=dist(x,y,xx,yy);
	r*=2;
	ans=0;
	while(d>0.00000000001){

		d-=r;
		ans++;
	}
	cout << ans << endl;
	return 0;
}