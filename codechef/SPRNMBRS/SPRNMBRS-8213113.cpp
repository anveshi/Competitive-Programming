#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
LL l,r,t,ans,temp;
int main(){
  cin >> t;
  while(t--){
    ans = 0LL;
    cin >> l >> r;
    for(LL i=0;i<63;i++){
      LL temp = (1LL<<i);
      if(temp>=l && temp<=r){
        ans++;
      }
    }
    for(int x=1;x<61;x++){
      temp = (1LL<<x);
      for(int y=1;y<41;y++){
        temp*=3LL;
        if(temp>r)
          break;
        else if(temp>=l && temp<=r)
          ans++;
      }
    }
    cout << ans << endl;
  }
  return 0;
}