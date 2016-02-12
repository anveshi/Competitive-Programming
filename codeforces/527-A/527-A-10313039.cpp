#include <bits/stdc++.h>
#define LL long long int
#define mp make_pair
#define pb push_back
#define ff first
#define ss second
const LL MOD = 1000000007;
using namespace std;
int main(){
	LL a,b,ans;
	cin >> a >> b;
	if(b>a)swap(a,b);
	ans =0LL;
	while(b!=0){
		ans+=(a/b);
		a%=b;
		if(b>a)swap(a,b);
	}
	cout << ans << endl;
	return 0;
}