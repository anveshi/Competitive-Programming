/*
He slept beneath the moon
He basked beneath the sun
He lived a life of going to do
and died with nothing done.
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
int main(){
  LL n,x,y,ans=0;
  map<LL, LL> M;
  cin >> n;
  while(n--){
    cin >> x >> y;
    M[60*x+y]++;
    ans = max(ans,M[60*x+y]);
  }
  cout << ans << endl;
  return 0;
}