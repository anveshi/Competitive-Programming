#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const int Maxn = 100005;
int S[Maxn];

LL after[20][20];
LL dp[1<<19][19];
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int x,y,z,n,m,k;
  cin >> n >> m >> k;
  for(int i=0;i<n;i++){
    cin >> S[i];
  }

  for(int i=0;i<k;i++){
    cin >> x >> y >> z;
    x--;y--;
    if(x==y)continue;
    after[x][y] = z;
  }
  memset(dp,0,sizeof(dp));
  for(int i=0;i<n;i++){
    dp[1<<i][i] = S[i];
  }

  for(int i=0;i<(1<<n);i++){
    for(int j=0;j<n;j++){
      if(!(i&(1<<j)))
        continue ;
      for(int k=0;k<n;k++){
        if(!(i&(1<<k))){
          dp[i|(1<<k)][k] = max(dp[i|(1<<k)][k] ,dp[i][j] + S[k] + after[j][k]);
        }
      }
    }
  }
  LL ANS = 0;
  for(int i=0;i<(1<<n);i++){
    if(__builtin_popcount(i)!=m)
      continue;
    for(int j=0;j<n;j++){
      if(i&(1<<j))
        ANS = max(ANS,dp[i][j]);
    }
  }
  cout << ANS << endl;

  return 0;
}