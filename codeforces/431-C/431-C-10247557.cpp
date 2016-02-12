#include <bits/stdc++.h>
#define LL long long int
#define mp make_pair
#define pb push_back
#define ff first
#define ss second
using namespace std;
const LL mod = 1000000007;
LL m1[101][101],m2[101][101];
LL fun1(LL n,LL k,LL d){
	if(n>=0 && m1[n][k]!=-1)return m1[n][k];
	if(n<0)return 0;
	else if(n==0)return 1;
	else{
		LL s=0LL;
		for(LL i=1;i<=k;i++){
			s += fun1(n-i,k,d);
			s%=mod;
		}
		return m1[n][k]=s;
	}
}
LL fun2(LL n,LL k,LL d){
	if(n>=0 && m2[n][k]!=-1)return m2[n][k];
	if(n<0)return 0;
	else if(n==0)return 1;
	else{
		LL s=0;
		for(LL i=1;i<d;i++){
				s +=fun2(n-i,k,d);
				s%=mod;
		}
		return m2[n][k]=s;
	}
}
int main(){
	LL n,k,d,ans;
	memset(m1,-1,sizeof(m1));
	memset(m2,-1,sizeof(m2));
	cin >> n >> k  >> d;
	ans = (fun1(n,k,d) - fun2(n,k,d)+mod)%mod;
	cout << ans << endl;
	return 0;
}