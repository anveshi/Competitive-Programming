#include<bits/stdc++.h>
#define LL long long int
#define mp make_pair
#define pb push_back
#define ff first
#define ss second
using namespace std;
int main(){
	LL t,n,ans;
	scanf("%lld",&t);
	while(t--){
		scanf("%lld",&n);
		n = (n-2)/2;
		ans = (n*(n+1))/2;
		printf("%lld\n",ans);
	}
	return 0;
}