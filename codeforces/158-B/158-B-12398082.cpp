#include <bits/stdc++.h>
using namespace std;
int cnt[5];
int main(){
  int n,x;
  cin >> n;
  for(int i=0;i<n;i++){
    cin >> x;
    cnt[x]++;
  }
  int ans = 0;
  ans += cnt[4];
  ans += cnt[3];
  cnt[1]-=cnt[3];
  if(cnt[1]<0)
    cnt[1]=0;
  cnt[1]+=(cnt[2]*2);
  ans+=((cnt[1]+3)/4);
  cout << ans << endl;
  return 0;
}