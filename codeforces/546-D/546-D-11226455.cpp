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
const int Max = 5000005;
int fac[Max];
int pr[Max];
void fun(){
	int i;
	for(i=2;i<=Max;i++){
		if(!fac[i]){
			for(int j=i;j<=Max;j+=i){
				int val=0,temp=j;
				while(temp%i==0){
					temp/=i;val++;
				}
				fac[j]+=val;
			}
		}
	}
	for(int i=2;i<=Max;i++){
		pr[i] = pr[i-1]+fac[i]; 
	}
	return ;
}
int main(){
	fun();
	int t,a,b;
	scanf("%d",&t);
	while(t--){
		scanf("%d%d",&a,&b);
		printf("%d\n",pr[a]-pr[b]);
	}
	return 0;
}