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
typedef pair<LL,LL> PII;
typedef vector<LL> VI;
typedef vector<PII> VPII;
LL gcd1(LL a,LL b){while(b){LL t=a%b;b=a;a=t;}return a;}
int main(){
	string s;int i,j,k,t,x,temp,nod,n;
	vector <int> v;
	cin >> s;
	 n = s.length(); 
	for(x=0;x<1000;x+=8){
		temp =x;
		i = x;
		if(i<10)nod=1;
		else if(i<100)nod=2;
		else nod = 3;
		v.clear();
		if(nod==1)v.pb(i);
		else if(nod==2){
			v.pb(i/10);v.pb(i%10);
		}
		else if(nod==3){
			v.pb(i/100);
			i%=100;
			v.pb(i/10);
			v.pb(i%10);
		}
		int sz = v.size();
		int flag = 0,p1=0;
		for(i=0;i<n;i++){
			if((s[i]-'0')==v[p1])p1++;
			if(p1==sz){
				cout << "YES"  << endl << temp << endl;
				return 0;
			}
		}
	}
	cout << "NO" << endl;
	return 0;
}