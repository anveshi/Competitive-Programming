#include <bits/stdc++.h>
#define LL long long int
#define mp make_pair
#define pb push_back
#define ff first
#define ss second
const LL MOD = 1000000007;
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	double val;
	cin.tie(NULL);
	LL i,j,t,m,n,ans=0,x;
	cin >> n;
	for(i=0;i<n;i++){cin>>x;ans+=x;}
	val = (double)ans/n;
	printf("%0.10lf\n",val);


	return 0;
}