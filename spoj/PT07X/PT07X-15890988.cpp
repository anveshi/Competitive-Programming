#include<bits/stdc++.h>
using namespace std;
#define Maxn 100005
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


int main(){
  int N,X,Y;
  HopcroftKarp graph;
  while(cin >> N){
    graph.reset(N+1);
    for(int i=0;i<N-1;i++){
      cin >> X >> Y;
      graph.AddEdge(X,Y);
      graph.AddEdge(Y,X);
    }
    cout << graph.Match()/2 << endl;
  }
  return 0;
}
