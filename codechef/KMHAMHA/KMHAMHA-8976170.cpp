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

const int Maxn = 100005;
//for maximum bipartite matching
struct HopcroftKarp{
  vector<int> g[Maxn];
  int n,distX[Maxn],distY[Maxn],mateX[Maxn],mateY[Maxn];
  queue<int> q;
  inline void reset(int m){ 
    n=m; 
    for(int i=0;i<n;i++) g[i].clear();
    memset(mateX,-1,(n+1)*sizeof(int));
    memset(mateY,-1,(n+1)*sizeof(int)); 
  }
  inline void AddEdge(int u,int v){
    g[u].push_back(v);
  }

  inline bool bfs(){
    bool found=false; 
    for(int i=0;i<n;i++){
      if(mateX[i]==-1) 
        q.push(i);
    } 
    for(int i=0;i<n;i++)
      distX[i]=distY[i]=0;

    while(!q.empty()){
      int u=q.front();q.pop();
      for(int i=0;i<(int)(g[u].size());i++){
        if(distY[g[u][i]]==0){
          distY[g[u][i]]=distX[u]+1;
          if(mateY[g[u][i]]==-1) 
            found=true;
          else{
            distX[mateY[g[u][i]]]=distY[g[u][i]]+1;
            q.push(mateY[g[u][i]]);
          }
        }
      }
    }
    return found;
  }
  bool dfs(int u){
    for(int i=0;i<(int)(g[u].size());i++){
      if(distY[g[u][i]]==distX[u]+1){
        distY[g[u][i]]=0;
        if(mateY[g[u][i]]==-1||dfs(mateY[g[u][i]])){
          mateX[u]=g[u][i]; 
          mateY[g[u][i]]=u; 
          return true; }
      }
    }
    return false;
  }
  int Match(){
    int res=0; 
    while(bfs()) 
      for(int i=0;i<n;i++){
        if(mateX[i]==-1) 
          if(dfs(i)) 
            res++;
      } 
    return res;
  }
};

map <int,int> M1,M2;
int main(){
  fastIO();
  int T;
  int N,M,X,Y,a1,a2;
  cin >> T;
  while(T--){
    
    M1.clear();
    M2.clear();
   cin >> N;
   a1=0,a2=N;
   HopcroftKarp Graph;
   Graph.reset(2*N+1);
   while(N--){
    cin >> X >> Y;
    if(M1.find(X)==M1.end()){
        M1[X] = ++a1;
    }
    if(M2.find(Y)==M2.end()){
        M2[Y] = ++a2;
    }
    //trace2(M1[X],M2[Y]);
    Graph.AddEdge(M1[X],M2[Y]);
    Graph.AddEdge(M2[Y],M1[X]);
   }
   cout << Graph.Match()/2 << endl;
  }  
  return 0;
}