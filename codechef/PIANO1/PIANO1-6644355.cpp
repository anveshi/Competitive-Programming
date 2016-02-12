#include <bits/stdc++.h>
#define LL long long int
using namespace std;
int main(){
	ios_base::sync_with_stdio(false); 	
	cin.tie(NULL);
	LL i,l,n,t,ini;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		LL val=0LL;
		l = s.length();
		for(i=0;i<l;i++){
			s[i]=='T'?val+=2:val+=1;
		}
		ini=val;
		cin >> n;
		n*=12;
		LL ans=0LL;
		while(val<n){
			ans =ans + (n-val);
			val+=ini;
		}
		cout << ans << endl;
	}
	return 0;
}