#include<bits/stdc++.h>
#define LL long long int
#define mp make_pair
#define pb push_back
#define ff first
#define ss second
using namespace std;
const LL MOD = 1000000007;
LL dp[1802][303][12];
LL Valid(LL x,LL y,LL z){
	if(x>=0 && x<1802 && y>=0 && y<=303 && z>=0 && z<12)
		return 1;
	return 0;
}
LL fun(LL Runs,LL Balls,LL W){
	LL ret,a1,a2,a3,a4;
	if(Valid(Runs,Balls,W)){
	if(dp[Runs][Balls][W]!=-1)return dp[Runs][Balls][W];}
	if(Runs%2==1 || W<0 || Runs>Balls*6 || Runs <0){
		return 0;
	}
	else if(Balls==1){
		if(Runs==6 || Runs==4)
			return 1;
		else if(Runs==0) {
			if(W>0)
				return 2;
			else return 1;
		}
		else return 0;
	}
	else{
		if(W>0){
			a1 =fun(Runs-6,Balls-1,W);
			a2 = fun(Runs-4,Balls-1,W);
			a3 = fun(Runs,Balls-1,W);
			a4 = fun(Runs,Balls-1,W-1);
			ret = a1+a2+a3+a4;
			ret%=MOD;
			return dp[Runs][Balls][W]=ret;
		}
		else{
			a1 =fun(Runs-6,Balls-1,W);
			a2 = fun(Runs-4,Balls-1,W);
			a3 = fun(Runs,Balls-1,W);
			//ret = fun(Runs-6,Balls-1,W) + fun(Runs-4,Balls-1,W)+fun(Runs,Balls-1,W);
			ret = a1+a2+a3;
			ret%=MOD;
			return dp[Runs][Balls][W]=ret;
		}
	}
}
int main(){
	LL T,R,B,L,ans;
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	cin >> T;
	for(int i=0;i<1802;i++)for(int j=0;j<303;j++)for(int k=0;k<12;k++)dp[i][j][k]=-1;
	while(T--){
		cin >> R >> B >> L;
		ans  = fun(R,B,L);
		cout << ans << endl;
	}

	return 0;
}