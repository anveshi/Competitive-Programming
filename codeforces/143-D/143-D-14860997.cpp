#include <bits/stdc++.h>
using namespace std;

int Value[1005][1005];
int N,M;

int dx[]={-2,-2,-1,-1, 1, 1, 2, 2};
int dy[]={-1,+1,-2,+2,-2,+2,-1,+1};

const int Maxn = 1000005;

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

bool isGood(int x,int y){
  return (x<N && y<M && x>=0 && y>=0);
}
int main(){
  cin >> N >> M;
  HopcroftKarp Graph;
  Graph.reset(N*M+1);
  for(int i=0;i<N;i++){
    for(int j=0;j<M;j++){
      Value[i][j] = i*M + j + 1;
    }
  }
  for(int i=0;i<N;i++){
    for(int j=0;j<M;j++){
      for(int k=0;k<8;k++){
        int nextX = i + dx[k];
        int nextY = j + dy[k];
        if(isGood(nextX,nextY)){
          Graph.AddEdge(Value[i][j],Value[nextX][nextY]);
        }
      }
    }
  }
  int Ans = N*M;
  Ans -= (Graph.Match()/2);
  cout << Ans << endl;
  return 0;
}