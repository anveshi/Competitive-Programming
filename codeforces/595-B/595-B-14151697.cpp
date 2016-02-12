// Anve$hi $hukla

#include <bits/stdc++.h>
using namespace std;

#define TRACE
#ifdef TRACE
#define trace1(x)       cerr<< #x <<": "<<x<<endl;
#define trace2(x, y)    cerr<< #x <<": "<<x<<" | "<< #y <<": "<<y<< endl;
#define trace3(x, y, z) cerr<< #x <<": "<<x<<" | "<< #y <<": "<<y<<" | "<< #z <<": "<<z<< endl;
#else
#define trace1(x)
#define trace2(x, y)
#define trace3(x, y, z)
#endif

typedef long long LL;

inline void fastIO(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
}
const LL Mod = 1000000007;
LL p[12];
const int Maxn = 100005;
LL a[Maxn],b[Maxn];
LL fun(LL X,LL Y,LL r){
  //trace3(X,Y,r);
  if(X<r)
    return 0;
  return ((X-r)/Y) + 1;
}

int main(){
  fastIO();
  p[0] = 1;
  for(int i=1;i<12;i++){
    p[i] = (p[i-1]*10);
  }
  LL n,k,z;
  cin >> n >> k;
  z = n/k;
  for(int i=0;i<z;i++){
    cin >> a[i];
  }
  for(int i=0;i<z;i++){
    cin >> b[i];
  }
  LL ans=1;
  for(int i=0;i<z;i++){
    LL res = fun(p[k]-1,a[i],0);
    LL temp = (p[k-1]*b[i])%a[i];
    //trace1(temp);
    temp = (a[i] - temp)%a[i];
    //trace1(res);
    res -= fun(p[k-1]-1,a[i],temp);
    //trace1(res);
    if(i==0)
      ans = res%Mod;
    else
      ans = (ans*res)%Mod;
  }
  cout << ans << endl;
  return 0;
}