#include<bits/stdc++.h>
#define LL long long int
#define mp make_pair
#define pb push_back
#define ff first
#define ss second
using namespace std;
int main(){
	LL x0,y0,x,y,i,n,a,b,fa,fb,g;	
	cin  >> n >> x0 >> y0;
	map < pair<LL,LL>,LL > M;
	for(i=0;i<n;i++){
		cin >> x >> y;
		a = x-x0;
		b = y-y0;
		fa=fabs(a);fb=fabs(b);
		if(b==0)a=1;
		if(a==0)b=1;
		if(a<0 && b<0){a*=-1;b*=-1;}
		if(a>0 && b<0){a*=-1;b*=-1;}
		g=__gcd(fa,fb);
		if(a*b!=0){
			a/=g;
			b/=g;
		}
		M[mp(a,b)]++;
	}
	cout << M.size() << endl;
	return 0;
}