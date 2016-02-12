#include <bits/stdc++.h>
using namespace std;

int Value[1005][1005];
int N,M;
const int dx[] = {2, 2, 1, 1, -2, -2, -1, -1};
const int dy[] = {1, -1, 2, -2, 1, -1, 2, -2};

#define MAXN 1000005 /// Maximum possible Number of nodes
#define MAXE 8000001 /// Maximum possible Number of edges
#define INF (1<<29)

int ptr[MAXN],Next[MAXE],zu[MAXE];
int n,m,match[MAXN],D[MAXN],q[MAXN];

void init(int _n){ /// initialization _n=number of nodes
  n=_n;
  m=0;
  memset(ptr,~0,sizeof(int)*(n+1));
}
void add_edge(int u,int v){ /// Adding edge between u and v
  Next[m]=ptr[u];ptr[u]=m;zu[m]=v;++m;
}
bool bfs(){
  int u,v;
  register int i;
  int qh=0, qt=0;
  for(i=1; i<=n; i++){
    if(!match[i]){
      D[i]=0;
      q[qt++]=i;
    }
    else D[i]=INF;
  }
  D[0]=INF;
  while(qh<qt){
    u=q[qh++];
    if(u!=0){
      for(i=ptr[u]; ~i; i=Next[i]){
        v=zu[i];
        if(D[match[v]]==INF){
          D[match[v]]=D[u]+1;
          q[qt++]=match[v];
        }
      }
    }
  }
  return D[0]!=INF;
}
bool dfs(int u){
  int v;
  register int i;
  if(u){
    for(i=ptr[u]; ~i; i=Next[i]){
      v=zu[i];
      if(D[match[v]]==D[u]+1){
        if(dfs(match[v])){
          match[v]=u;
          match[u]=v;
          return true;
        }
      }
    }
    D[u]=INF;
    return false;
  }
  return true;
}
int run(){
  int matching=0;
  register int i;
  while(bfs())
    for(i=1; i<=n; i++)
      if(!match[i] && dfs(i))
        matching++;
  return matching;
}
bool isGood(int x,int y){
  return (x<N && y<M && x>=0 && y>=0);
}
int main(){
  cin >> N >> M;
  init(N*M+1);
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
          add_edge(Value[i][j],Value[nextX][nextY]);
        }
      }
    }
  }
  int Ans = N*M;
  Ans -= (run());
  cout << Ans << endl;
  return 0;
}