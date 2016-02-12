#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,x,y,M=0,ans=0;
	cin >> n;
	while(n-->0){
		cin >> x >> y;
		M+=(y-x);
		ans = max(ans,M);
	}
	cout << ans << endl;
	return 0;
}