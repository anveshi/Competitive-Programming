#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const LL MOD = 1000000000;
const LL Max = 2002;
LL dp[2*Max][Max];
LL ans[Max][Max];
LL fun(LL i, LL j){
  if(dp[i][j]!=0)return dp[i][j];
  if(j==0)return 1;
  if(i<j)return 0;
  if(i==j)return 1;
  else return (fun(i-1,j-1) + fun(i-1,j))%MOD;
}
void pre(){
  for(int i=0;i<2*Max;i++){
    for(int j=0;j<Max;j++){
      dp[i][j]=fun(i,j);
    }
  }
  return ;
}
int main(){
  pre();
  LL T,N,M;
  scanf("%lld",&T);
  while(T--){
    scanf("%lld %lld",&N,&M);
    for(int i=1;i<=N;i++){
      LL presum = 0;
      for(int j=0;j<=M;j++){
        if(i==1)
          ans[i][j] = dp[j+M-1][M-1]; 
        else{
          presum += ans[i-1][j];
          presum %= MOD; 
          ans[i][j] = (presum*dp[j+M-1][M-1])%MOD;
        }
      }
    }
    LL res = 0;
    for(int i=0;i<=M;i++){
      res += ans[N][i];
      res %= MOD;
    }
    printf("%lld\n",res);
  }
	return 0;
}