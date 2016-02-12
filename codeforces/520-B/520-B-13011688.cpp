#include <bits/stdc++.h>
using namespace std;
int ans;
int main(){
  int n,m;
  cin >> n >> m;
  while(n<m){
    if(m&1)
      m++;
    else
      m>>=1;
    ans++;
  }
  ans += (n-m);
  cout << ans << endl;
  return 0;
}