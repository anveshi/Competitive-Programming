#include <bits/stdc++.h>
#define LL long long int
const LL mod = 1000000007;
using namespace std;
int main(){
	LL n,m,i,j;
	string s;
	set <char> SET[101];
	cin >> n >> m;
	for(i=0;i<n;i++){
		cin >> s;
		for(j=0;j<m;j++)
			SET[j].insert(s[j]);
	}
	LL ans = 1LL;
	for(i=0;i<m;i++)
		if(SET[i].size()!=0)
			ans*=SET[i].size(),ans%=mod;
	cout << ans << endl;
	return 0;
}