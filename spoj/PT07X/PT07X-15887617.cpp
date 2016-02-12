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
vector <int> edges[Maxn];
int Dp[Maxn][2];
bool visited[Maxn];

int fun(int v,int par,int x){
  if(Dp[v][x]!=-1)
    return Dp[v][x];
  if(x==0){
    int Ret = 0;
    for(int i=0;i<edges[v].size();i++){
      int next = edges[v][i];
      if(next!=par)
        Ret += fun(next,v,1);
    }
    return Dp[v][x] = Ret;
  }
  else{
    // x==1
    int Ret = 1;
    for(int i=0;i<edges[v].size();i++){
      int next = edges[v][i];
      if(next!=par)
        Ret += min(fun(next,v,1),fun(next,v,0));
    }
    return Dp[v][x] = Ret;
  }
}
int main(){
  fastIO();
  int N,X,Y;
  while(cin >> N){
    memset(Dp,-1,sizeof(Dp));
    for(int i=0;i<Maxn;i++){
        edges[i].clear();
    }
    for(int i=0;i<N-1;i++){
      cin >> X >> Y;
      edges[X].push_back(Y);
      edges[Y].push_back(X);
    }
    int x = fun(1,0,0);
    int y = fun(1,0,1);
    cout << min(x,y) << endl;
  }
  return 0;
}
