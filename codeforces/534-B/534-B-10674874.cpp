#include <bits/stdc++.h>
#define LL long long int
#define mp make_pair
#define pb push_back
#define ff first
#define ss second
const LL MOD = 1000000007;
using namespace std;
LL dp[205][2000];
int main(){
	//ios_base::sync_with_stdio(false); 	
	//cin.tie(NULL);
	LL i,j,k,t,m,n,x,y,sz,v1,v2,d,ans=0LL;
	for(i=0;i<205;i++)for(j=0;j<2000;j++)dp[i][j]=0LL;
	cin >> v1 >> v2 >> t >> d;
	dp[0][v1]=v1;
	for(i=0;i<t-1;i++){
		for(j=0;j<1000;j++){
			if(dp[i][j]){
			//	cout << i << "  " << j << endl;
				for(k=j-d;k<=j+d;k++){
					if(k>=0 && k<2000){
						dp[i+1][k] = max(dp[i+1][k],dp[i][j]+k);
					}
				}
			}
		}
	}
	cout << dp[t-1][v2] << endl;
	return 0;
}