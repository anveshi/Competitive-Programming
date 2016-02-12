#include <bits/stdc++.h>
#define O(x,y) cout << x << " " << y << "\n"
using namespace std;
const int Maxn=100005;
bool col[Maxn],Marked[Maxn];
vector <int> edges[Maxn];
long long sz[2],ans=0;
inline long long NC3(long long n){
  return (n*(n-1)*(n-2))/6;
}
void dfs(int v){
  Marked[v] = true;
  ans += sz[col[v]];
  sz[col[v]]++;
  for(int i=0;i<edges[v].size();i++){
    int u = edges[v][i];
    if(!Marked[u]){
      col[u] = col[v]^1;
      dfs(u);
    }
    else if(col[v]==col[u]){
      O(0,1);
      exit(0);
    }
  }
}
int main(){
  long long N,M,x,y;
  cin >> N >> M;
  for(int i=0;i<M;i++){
    cin >> x >> y;
    edges[x].push_back(y);
    edges[y].push_back(x);
  }
  for(int i=1;i<=N;i++){
    if(!Marked[i]){
      sz[0]=sz[1]=0;
      dfs(i);
    }
  }
  if(!M)
    O(3,NC3(N));
  else if(ans ==0)
    O(2,M*(N-2));
  else
    O(1,ans);
  return 0;
}