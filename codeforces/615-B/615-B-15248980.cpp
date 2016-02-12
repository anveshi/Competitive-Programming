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

const LL Maxn = 200005;
vector <LL> edge[Maxn];
LL In[Maxn], Dp[Maxn];

int main(){
  fastIO();
  LL n,M,x,y;
  cin >> n >> M;
  for(LL i=0;i<M;i++){
    cin >> x >> y;
    edge[x].push_back(y);
    edge[y].push_back(x);
    In[x]++;
    In[y]++;
  }

  for(LL i=0;i<=n;i++){
    sort(edge[i].begin(), edge[i].end());
  }

  Dp[1] = (In[1]>0?1:0);

  for(LL i=2;i<=n;i++){
    Dp[i] = (In[i]>0?1:0);
    for(LL j=0;j<edge[i].size();j++){
      if(edge[i][j]>i)
        break;
      else{
        Dp[i] = max(Dp[i], 1+Dp[edge[i][j]]);
      }
    }
  }

  LL Ans = 0LL;
  for(LL i=1;i<=n;i++){
    LL temp = Dp[i] * In[i];
    Ans = max(Ans, temp);
  }
  cout << Ans << endl;
  return 0;
}