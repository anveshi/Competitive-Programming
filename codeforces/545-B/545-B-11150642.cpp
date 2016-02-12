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
typedef pair<int,int> PII;
typedef vector<int> VI;
typedef vector<PII> VPII;
LL gcd1(LL a,LL b){while(b){LL t=a%b;b=a;a=t;}return a;}
int main(){
	int n,i,j,diff=0;
	string s,t;
	cin >> s >> t;
	n = s.length();
	for(i=0;i<n;i++){
		if(s[i]!=t[i])
			diff++;
	}
	if(diff%2==1)
		cout << "impossible" << endl;
	else{
		diff/=2;
		for(i=0;i<n;i++){
			if(s[i]==t[i])cout << s[i];
			else{
				if(diff){
					cout << s[i];
					diff--;
				}
				else 
					cout << t[i] ;
			}
		}
		cout << endl;

	}
	return 0;
}