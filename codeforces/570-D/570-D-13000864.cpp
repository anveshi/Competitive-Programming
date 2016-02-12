#include <bits/stdc++.h>
using namespace std;

const int Maxn = 500005;
int n,m;
vector <int> neigh[Maxn];
char let[Maxn];
int cur, lef[Maxn],rig[Maxn];
vector <int> M[Maxn],I[Maxn];
void dfs(int v,int lvl){
  lef[v] = ++cur;
  I[lvl].push_back(cur);
  if(M[lvl].empty())
    M[lvl].push_back(1 << (let[v] - 'a'));
  else{
    M[lvl].push_back(M[lvl].back()^(1<<(let[v]-'a'))); 
  }
  for(int i=0;i<neigh[v].size();i++){
    dfs(neigh[v][i],lvl+1);
  }
  rig[v] = cur;
}
int main(){
  scanf("%d %d",&n,&m);
  for(int i=2;i<=n;i++){
    int p;
    scanf("%d",&p);
    neigh[p].push_back(i);
  }
  scanf("%s",let+1);
  dfs(1,1);
  while(m--){
    int v,h;
    scanf("%d%d",&v,&h);
    int rind = upper_bound(I[h].begin(),I[h].end(),rig[v]) - I[h].begin() -1;
    int lind = lower_bound(I[h].begin(),I[h].end(),lef[v]) - I[h].begin() -1;
    int res1=0,res2=0;
    if(rind>=0)
      res1 = M[h][rind];
    if(lind>=0)
      res2 = M[h][lind];
    if(__builtin_popcount(res1^res2)<=1)
      printf("Yes\n");
    else
      printf("No\n");
  }
  return 0;
}