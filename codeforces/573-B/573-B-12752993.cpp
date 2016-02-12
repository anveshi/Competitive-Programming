#include <bits/stdc++.h>
using namespace std;
const int Maxn = 100005;
const int inf = 1000000002;
int h[Maxn],dp[Maxn];
int main(){
  int n;
  scanf("%d",&n);
  for(int i=1;i<=n;i++){
    scanf("%d",&h[i]);
  }
  for(int i=0;i<Maxn;i++){
    dp[i] = inf;
  }
  dp[0] = 0;
  for(int i=1;i<=n;i++){
    dp[i] = min(dp[i-1]+1,h[i]);
  }
  dp[n+1] = 0;
  for(int i=n;i>=1;i--){
    dp[i] =  min(dp[i],dp[i+1]+1);
  }
  int ans = 1;
  for(int i=1;i<=n;i++){
    ans = max(ans,dp[i]);
  }
  printf("%d\n",ans);
  return 0;
}