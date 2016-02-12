#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  LL t,a,b,ans;
  cin >> t;
  while(t--){
    cin >> a >> b;
    ans=0;
    while((a&(a-1))||a>b){
      a/=2;ans++;
    }
    LL z = (LL)log2(b/a);
    ans+=z;
    cout << ans << endl;
  }
  return 0;
}