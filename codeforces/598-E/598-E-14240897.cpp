// Anve$hi $hukla
// Until the lion learns how to write, every story will glorify the hunter.

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

const int Maxn = 200005;
int dp[1<<5][1<<5][1<<6];

int Fun(int n,int m,int k){
  if(dp[n][m][k]!=-1)
    return dp[n][m][k];
  if(n*m==k || k==0)
    return 0;
  if(k>n*m)
    return 10000000;
  else{
    dp[n][m][k] = 10000000;
    for(int i=1;i<n;i++){
      for(int j=0;j<=k;j++){
        dp[n][m][k] = min(dp[n][m][k],Fun(i,m,j) +Fun(n-i,m,k-j)+m*m);
      }
    }
    for(int i=1;i<m;i++){
      for(int j=0;j<=k;j++){
        dp[n][m][k] = min(dp[n][m][k],Fun(n,i,j) + Fun(n,m-i,k-j)+n*n);
      }
    }
    return dp[n][m][k];
  }
}
int main(){
  fastIO();
  int t,n,m,k;
  cin >> t;
  memset(dp,-1, sizeof dp);
  while(t--){
    cin >> n >> m >> k;
    cout << Fun(n,m,k) << endl;
  }
  return 0;
}