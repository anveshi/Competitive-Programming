#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const LL Maxn = 100005;
LL a[Maxn],b[Maxn],c[Maxn];
void populate(LL n,LL idx){
  if(n<0)return;
  else if(n==0){
    b[n]=idx;
    return;
  }
  for(LL i=1;i*i<=n;i++){
    if(n%i==0){
      b[i] = idx;
      b[n/i] = idx;
    }
  }
  return ;
}
int main(){
  LL n,k,ans=0,z=-1;
  for(LL i=0;i<Maxn;i++){
     b[i] = -1;
   }
   scanf("%lld %lld",&n,&k);
   for(LL i=0;i<n;i++){
     scanf("%lld",&a[i]);
   }
   LL p; 
   for(LL i=0;i<n;i++){
    if(a[i]<=k){
      c[i] = -1;
      if(a[i]==k){
      z=i;
      }
      continue;
    }
    else
     p = b[a[i]];
     c[i] = max(p,z);
     if(a[i]-k)
      populate(a[i]-k,i);
   }
   LL m = -1;
   for(LL i=0;i<n;i++){
    //  cout << c[i] <<  " " ;
      ans+=(i-max(m,c[i]));
    //  cout << (i-max(m,c[i])) << endl;
      m = max(m,c[i]);
   }
   cout << ans << endl;
  return 0;
}