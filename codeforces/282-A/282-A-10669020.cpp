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
	cin.tie(NULL);
	LL i,j,m,n,ans=0;
	string s;
	cin >> n;
	while(n--){
		cin >> s;
		if(s[0]=='+' || s[2]=='+')
			ans++;
		else ans--;
	}
	cout << ans <<  endl; 

	return 0;
}