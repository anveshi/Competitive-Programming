#include <bits/stdc++.h>
using namespace std;
#define mp make_pair
#define pb push_back
#define ff first
#define ss second
#define all(c) (c).begin(),(c).end() 
#define tr(c,it) for(auto it = (c).begin(); it != (c).end(); it++) 
#define __ ios_base::sync_with_stdio(false);cin.tie(NULL);
#define TRACE
#ifdef TRACE
#define trace1(x)     	   cerr << #x << ": " << x << endl;
#define trace2(x, y)       cerr << #x << ": " << x << " | " << #y << ": " << y << endl;
#define trace3(x, y, z)    cerr << #x << ": " << x << " | " << #y << ": " << y << " | " << #z << ": " << z << endl;
#define trace4(a, b, c, d) cerr << #a << ": " << a << " | " << #b << ": " << b << " | " << #c << ": " << c << " | " << #d << ": " << d << endl;
#else
#define trace1(x)
#define trace2(x, y)
#define trace3(x, y, z)
#define trace4(a, b, c, d)
#endif
typedef long long LL;
const LL MOD = 1000000007;
int main(){
	LL n,x,y,d,j;
	x = INT_MAX;
	y = INT_MAX;
	d = INT_MAX;
	cin >> n;
	for(LL i=0;;i++){
		if(n-4*i<0)
			break;
		if((n-4*i)%7==0){
			j = (n-4*i)/7;
			if(d>i+j){
				d = i+j;
				x = i;
				y = j;
			}
			else if(d==i+j && i>x){
				x = i;
				y = j;
			}
		}
	}
	if(d==INT_MAX)
		cout << -1 << endl;
	else {
		for(int i=0;i<x;i++)cout << 4;
		for(int i=0;i<y;i++)cout << 7;
		cout << endl;
	}
	return 0;
}