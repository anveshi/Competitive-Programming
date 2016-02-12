#include <bits/stdc++.h>
using namespace std;
int lcm(int a,int b){
  assert(__gcd(a,b)!=0);
  return ((a*b)/(__gcd(a,b)));
}
int main(){
  int a[4],d;
  for(int i=0;i<4;i++){
    cin >> a[i];
  }
  cin >> d;
  int ans = d;
  for(int i=0;i<(1<<4);i++){
    int l = 1;
    for(int j=0;j<4;j++){
      if((i&(1<<j))){
        l = lcm(l,a[j]);
      }
    }
    assert(l!=0);
    if((__builtin_popcount(i))%2==0){
      ans -= d/l;
    }
    else
      ans += d/l;
  }
  cout << ans << endl;
  return 0;
}