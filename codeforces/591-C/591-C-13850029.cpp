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
const LL Maxn = 500005;
const LL Mod = 1000000007;
const int inf = 10000001;
inline void fastIO(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
}
int dp[Maxn],a[Maxn];

int main(){
  fastIO();
  int n;
  cin >> n;
  for(int i=0;i<n;i++){
    cin >> a[i];
  }
  vector <int> v;
  v.push_back(0);
  for(int i=0;i<n;i++){
    dp[i] = inf;
  }
  dp[0] = 0;
  dp[n-1] = 0;
  for(int i=1;i<n-1;i++){
    if(a[i]==a[i-1] || a[i]==a[i+1]){
      v.push_back(i);
      dp[i] = 0;
    }
  }
  v.push_back(n-1);
  vector <int> :: iterator it;
  int ans = 0;

  for(int i=1;i<n-1;i++){
    if(dp[i] == 0)
      continue;
    it = lower_bound(v.begin(), v.end(),i);
    int nxt,pre;
    nxt  = *it;
    it--;
    pre = *it;

    dp[i] = min(dp[i],abs(nxt-i));
    dp[i] = min(dp[i],abs(i-pre));
    ans = max(ans,dp[i]);
  }
  cout << ans << endl;
  for(int i=0;i<n;i++){
   if(dp[i]%2==1){
    cout << (a[i]^1);
   } 
   else
    cout << a[i] ;
  if(i!=n-1)
    cout <<  " ";
  }
  cout << endl;
  return 0;
}