#include <bits/stdc++.h>
using namespace std;
const int Maxn = 100005;
int col[Maxn],visited[Maxn];
vector <int> edge[Maxn];
int m,ans=0;
void dfs(int v,int x){
  if(x>m)
    return;
  visited[v] = 1;
  int sz = edge[v].size();
  int nl = 0;
  for(int i=0;i<sz;i++){
    if(!visited[edge[v][i]]){
      nl++;
      int val = 0;
      if(col[edge[v][i]])
        val = x + 1;
      dfs(edge[v][i],val);
    }
  }
  if(nl==0)
    ans++;
}
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int n,x,y;
  cin >> n >> m;
  for(int i=0;i<n;i++){
    cin >> col[i];
  }
  for(int i=0;i<n-1;i++){
    cin >> x >> y;
    x--;y--;
    edge[x].push_back(y);
    edge[y].push_back(x);
  }
  dfs(0,col[0]);
  cout << ans << endl;
  return 0;
}