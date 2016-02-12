#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
pair <LL,LL> p[100005];
LL pre[100005];
LL BS(LL x,LL st,LL end){
  if(end-st<=5){
    for(int i=end;i>=st;i--){
      if(p[i].first<=x)
        return i;
    }
  }
  LL mid = (st+end)/2;
  if(p[mid].first>x)
    return BS(x,st,mid);
  else
    return BS(x,mid,end);
}
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  LL n,d;
  cin >> n  >> d;
  for(int i=1;i<=n;i++){
    cin >> p[i].first >> p[i].second;
  }
  sort(p+1,p+n+1);
  for(int i=1;i<=n;i++){
    pre[i] = pre[i-1] + p[i].second;
  }
  LL ans = 0;
  for(int i=1;i<=n;i++){
    LL end = BS(p[i].first+d-1,i,n);
    ans = max(ans,pre[end]-pre[i-1]);
  }
  cout << ans << endl;
  return 0;
}