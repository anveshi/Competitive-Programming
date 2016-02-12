/*
Rejoice, and men will seek you;
Grieve, and they turn and go;
They want full measure of all your pleasure,
But they do not need your woe.
Be glad, and your friends are many;
Be sad, and you lose them all
There are none to decline your nectar Ed wine,
But alone you must drink life's gall.
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
int main(){
  LL ans=0,n,m;
  cin >> n >> m;
  for(int i=0;i*i<=1000;i++){
    for(int j=0;j*j<=1000;j++){
      if(i*i+j==n && i+j*j==m){
        ans++;
      }
    }
  }
  cout << ans << endl;
  return 0;
}