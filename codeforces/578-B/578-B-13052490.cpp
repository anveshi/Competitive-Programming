#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const int Maxn = 200005;
LL LOR[Maxn],ROR[Maxn],a[Maxn];
int main(){
  LL n,k,x,X=1LL;
  cin >> n >> k >> x;
  for(int i=1;i<=n;i++){
    cin >> a[i];
  }
  for(int i=0;i<k;i++){
    X*=x;
  }
  for(int i=1;i<=n;i++){
    LOR[i] = LOR[i-1]|a[i];
  }
  for(int i=n;i>=1;i--){
    ROR[i] = ROR[i+1]|a[i];
  }
  LL ans = 0LL;
  for(int i=1;i<=n;i++){
    ans = max(ans,(LOR[i-1]|ROR[i+1]|(X*a[i])));
  }
  cout << ans << endl;
  return 0;
}