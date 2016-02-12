#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const int Maxn = 100005;
LL h[Maxn],dp[Maxn];
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  LL n;
  cin >> n;
  for(int i=1;i<=n;i++){
    cin >> h[i];
  }
  dp[n+1] = 0;
  for(int i=n;i>=1;i--){
    dp[i] = max(h[i],dp[i+1]);
  }
  for(int i=1;i<=n;i++){
    LL m = dp[i+1] - h[i] +1;
    if(m<0)m=0;
    cout <<  m << " ";
  }
  cout << endl;
  return 0;
}