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
int a[105][105],temp[105][105];
int main(){
	int n,m,i,j,k;
	__;
	string s[105];
	cin >> n >> m;
	for(i=1;i<=n;i++){
		cin >> s[i];
		for(j=1;j<=m;j++){
			if(s[i][j-1]=='B')
				a[i][j]=-1;
			else a[i][j]=1;
		}
	}
	int ans =0,x,y,z;
	for(i=n+m;i>=2;i--){
		for(j=n;j>=1;j--){
			x = j;
			y = i-j;
			if(x<1 || x>n || y<1 || y>m)continue;
			else{
				if(temp[x][y] == a[x][y])continue;
				else{
					z = a[x][y]-temp[x][y];
					for(int p1=1;p1<=x;p1++){
						for(int p2=1;p2<=y;p2++){
							temp[p1][p2]+=z;
						}
					}
					ans++;
				}
			}
		}
	}
	cout << ans << endl;
	return 0;
}