#include <bits/stdc++.h>
#define LL long long int
using namespace std;
int main(){
	ios_base::sync_with_stdio(false); 	
	cin.tie(NULL);
	LL i,n,t,ans;
	cin >> t;
	while(t--){
		cin >> n;
		ans=0LL;
		for(i=1;i*i<=n;i++){
			if(n%i==0){
				ans+=i;
				if(i!=(n/i))ans+=(n/i);
			}
		}
		cout<< ans << endl;
	}
	return 0;
}