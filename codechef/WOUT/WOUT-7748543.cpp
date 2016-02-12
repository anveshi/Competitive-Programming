/*
   “The doubters said,
   ‘Man can not fly,’
   The doers said,
   ‘Maybe, but we’ll try,’
   And finally soared
   In the morning glow
   While non-believers
   Watched from below.”
 */
#include <bits/stdc++.h>
typedef long long LL;
const LL Maxn = 1000006;
LL diff[Maxn],no[Maxn];
using namespace std;
int main(){
  LL t,ans,j,temp,n,h,x,y;
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cin >> t;
  while(t--){
    cin >> n >> h;
    for(int i=0;i<=n;i++){
      diff[i] = 0;
      no[i] = 0;
    }
    for(int i=0;i<n;i++){
      cin >> x >>y;
      diff[x] +=1;
      diff[y+1]-=1;
    }
    no[0] = diff[0];
    for(int i=1;i<=n;i++){
      no[i] = no[i-1] + diff[i];
    }
    for(int i=0;i<=n;i++){
      no[i] = n - no[i];
    }
    ans = 0;
    for(int i=0;i<h;i++){
      ans += no[i];
    }
    temp = ans;
    j=0;
    for(int i=h;i<n;i++){
      temp = temp-no[j]+no[i];
      ans = min(ans,temp);
      j++;
    }
    cout << ans << endl;
  }
  return 0;
}