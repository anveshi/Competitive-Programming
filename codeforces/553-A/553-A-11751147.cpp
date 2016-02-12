#include<bits/stdc++.h>
#define LL long long
using namespace std;
const LL MOD=1000000007;
const LL Max=1001;
LL fact[Max],ifact[Max];

LL modpow(LL a, LL n){
  LL ret=1LL;
  LL b=a;
  while(n){
    if(n&1) 
      ret=(ret*b)%MOD;
    b=(b*b)%MOD;
    n>>=1;
  }
  return (LL)ret;
}

LL inversemod(LL i){
  return modpow(i,MOD-2);
}

void pre(){
  LL i;
  fact[0]=1;
  for(LL i=1;i<Max;i++){
    fact[i]=fact[i-1]*i;
    fact[i]%=MOD;
  }
  ifact[0]=1;
  for(i=1;i<Max;i++){
    ifact[i]=inversemod(i)*ifact[i-1];
    ifact[i]%=MOD;
  }
  return ;
}
LL nCr(LL n, LL r){
  if(r>=n || n<0 || r<0)return 1;
  LL z = (fact[n]*ifact[n-r])%MOD;
  z*=ifact[r];
  z%=MOD;
  return z;          
}
int main(){
  LL n, k, c[1001], psum[1001], i, N, R;
  pre();
  psum[0]=0;
  cin >> n;
  for(i=1;i<=n;i++){
    cin >> c[i];
    psum[i]=psum[i-1]+c[i];
  }
  LL ans[1001];
  ans[1]=1;
  for(i=2;i<=n;i++){
    N = psum[i-1] + 1;
    R = c[i]-1;
    ans[i] = ans[i-1]*nCr(N+R-1,N-1);
    ans[i]%=MOD;
  }
  cout << ans[n] << "\n";
  return 0;
}