#include <bits/stdc++.h>
using namespace std;
int main(){
  int a[2],n,g;
  cin >> a[0] >> a[1] >> n;
  for(int i=0;;i^=1){
    g = __gcd(a[i],n);
    if(g>n){
      cout << (i^1) << endl;
      break;
    }
    n-=g;
  }
  return 0;
}