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
int a[100005];
int main(){
  int n,mi=0;
  cin >> n;
  for(int i=0;i<n;i++){
    cin >> a[i];
  }
  for(int i=0;i<n;i++){
   if(a[i]<=a[mi])
    mi=i; 
  }
  int t=mi;
  while(mi>=0 && a[t]==a[mi]){
    t--;
  }
  mi=t+1;
  int ans = n-mi;
  for(int i=mi;i<n-1;i++){
    if(a[i]>a[i+1])
      ans=-1;
  }
  for(int i=0;i<mi-1;i++){
    if(a[i]>a[i+1])
      ans=-1;
  }
  if(a[n-1]>a[0]&&ans!=n)
    ans=-1;
  if(ans==n)ans-=n;
  cout << ans << endl;
  return 0;
}