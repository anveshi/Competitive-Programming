#include <bits/stdc++.h>
using namespace std;
int main(){
  int x, y;
  cin >> x >> y;
  if(x<y){
    cout << -1 << endl;
  }
  else if(x==y){
    cout << x << endl;
  }
  else{
    int k1,k2;
    double ans=1111111111111.00;
    k1 = (x-y)/(2*y);
    k2 = (x+y)/(2*y);
    if(k1>0){
      double ans1 = (x+y)/(2.0*k1);
      ans = min(ans,ans1);
    }
    if(k2>0){
      double ans2 = (x+y)/(k2*2.0);
      ans = min(ans,ans2);
    }
    cout.precision(10);
    cout << fixed << ans << endl;
  }


  return 0;
}