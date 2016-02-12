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
const LL Maxn = 100005;
LL a[Maxn];

int main(){  
  fastIO();
  LL t,ans,n;
  cin >> t;
  while(t--){
    ans = 0;
    cin >> n;
    for(LL i=1;i<=n;i++){
      cin >> a[i];
    }
    for(LL i=1;i<=n;i++){
      if(i==1){
        ans++;
        continue;
      }
      if(a[i-1]<a[i]){
        a[i] = a[i-1]; 
      }
      else 
        ans++;
    }
     cout << ans << endl;
  }
  return 0;
}