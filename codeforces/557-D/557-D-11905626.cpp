#include <bits/stdc++.h>
using namespace std;
const int MAX=100005;
long long ans =0,sz[2];
bool cycle = false;
int col[MAX];
bool marked[MAX];
vector <long long> edges[MAX];
bool cnt[100005],ty=0;
long long NC3(long long n){
  return (n*(n-1)*(n-2))/6;
}

void dfs(int v){
  marked[v] = true;
  ans += sz[col[v]];
  sz[col[v]]++;
  for (int i = 0; i < edges[v].size(); i++){
    int u = edges[v][i];
    if (!marked[u]){
      col[u] = col[v] ^ 1;
      dfs(u);
    }
    else if (col[u] != (col[v] ^ 1))
      cycle = true;
  }
}
int main(){
  long long N,M,x,y;
  cin >> N >> M;
  for(int i=0;i<M;i++){
    cin >> x >> y;
    x--;y--;
    if(cnt[x] || cnt[y])
      ty=1; 
    cnt[x]++;
    cnt[y]++;
    edges[x].push_back(y);
    edges[y].push_back(x);
  }
  if(M==0){
    cout << 3 << " " << NC3(N) << endl;
    return 0;
  }
  if(ty==0){
    cout << 2 << " " << M*(N-2) << endl;
    return 0;
  }
  for (int i = 0; i < N; i++){
    if (!marked[i]){
      sz[0] = sz[1] = 0;
      dfs(i);
    }
  }
  if(cycle)
    cout << 0 << " " << 1 << endl;
  else
    cout << 1 <<  " " << ans << endl;
	return 0;
}