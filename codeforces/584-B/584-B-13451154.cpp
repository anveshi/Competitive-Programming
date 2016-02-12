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
void fastIO(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
}
const LL Mod = 1000000007;
LL binpower(LL a,LL b){
  if(b==0)
    return 1LL;
  LL temp = (binpower(a,b/2))%Mod;
  LL val = (temp*(temp))%Mod;
  if(b%2==0)
    return val;
  else
    return (val*a)%Mod;
}
int main(){  
  fastIO();
  LL n;
  cin >> n;
  LL ans;
  ans = binpower(3,3*n) - binpower(7,n);
  ans  = (ans+Mod)%Mod;
  cout << ans << endl;  
  return 0;
}