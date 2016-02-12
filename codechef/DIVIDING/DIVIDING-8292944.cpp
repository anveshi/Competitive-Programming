#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
LL x,val=0LL;
int main(){
  LL n;
  scanf("%lld",&n);
  for(int i=0;i<n;i++){
    scanf("%lld",&x);
    val+=x;
  }
  if(val==((n*(n+1))/2))
    cout << "YES" << endl;
  else
    cout << "NO" << endl;
  return 0;
}