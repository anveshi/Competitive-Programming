#include <bits/stdc++.h>
#define LL long long int
#define mp make_pair
#define pb push_back
#define ff first
#define ss second
const LL MOD = 1000000007;
using namespace std;
int a[1000005];
int main(){
	LL i,j,m,n,x;
	cin >> n;
	for(i=0;i<n;i++){
		cin  >>  x;
		a[x]++;
	}
	LL ans=(n*(n-1))/2;
	for(i=0;i<1000005;i++){
		if(a[i]!=0)
			ans=ans - ((a[i])*(a[i]-1))/2;
	}
	cout << ans  << endl;
	return 0;
}