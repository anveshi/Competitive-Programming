#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const LL Maxn = 100005;
LL arr[Maxn];
LL tree[Maxn<<2+1];
LL lazy[Maxn<<2+1];
pair< pair<LL,LL>, LL > P[Maxn];
LL L[Maxn],R[Maxn],C[Maxn],Rating[Maxn],minCost[Maxn],Ans[Maxn][505];
vector<LL> VV[201];
vector<LL> v,w;
bool Mycompare(const pair< pair<LL,LL> , LL>& i, const pair< pair<LL,LL>, LL>& j ){
  return (i.second>j.second);
}

void build_tree(LL node, LL a , LL b){
  if(a>b){
    return ; 
  }
  if(a==b){
    tree[node] =  arr[a];
    return; 
  }
  build_tree(node<<1, a, (a+b)>>1); 
  build_tree((node<<1)+1, ((a+b)>>1)+1,b); 
  tree[node] = min(tree[node<<1],tree[(node<<1)+1]); 
  return ; 
}

void update_tree(LL node, LL a, LL b, LL i, LL j, LL value) {
  if(lazy[node] != 0) { 
    tree[node] = lazy[node]; 
    if(a != b) {
      lazy[node<<1] = lazy[node]; 
      lazy[(node<<1)+1] = lazy[node];
    }
    lazy[node] = 0; 
  }
  if(a > b || a > j || b < i) 
    return;
  if(a >= i && b <= j) { 
    tree[node] = value;
    if(a != b) { 
      lazy[(node<<1)] = value;
      lazy[(node<<1)+1] = value;
    }
    return;
  }
  update_tree(node<<1, a, (a+b)>>1, i, j, value); 
  update_tree(1+(node<<1), 1+((a+b)>>1), b, i, j, value); 
  tree[node] = min(tree[node<<1], tree[(node<<1)+1]); 
}

LL query_tree(LL node, LL a, LL b, LL i, LL j) {
  if(a > b || a > j || b < i) return INT_MAX; 
  if(lazy[node] != 0) { 
    tree[node] = lazy[node]; 
    if(a != b) {
      lazy[node<<1] = lazy[node]; 
      lazy[(node<<1)+1] = lazy[node]; 
    }
    lazy[node] = 0; 
  }
  if(a >= i && b <= j) 
    return tree[node];
  LL q1 = query_tree(node<<1, a, (a+b)>>1, i, j); 
  LL q2 = query_tree(1+(node<<1), 1+((a+b)>>1), b, i, j); 
  LL res = min(q1, q2);
  return res;
}
int main(){
  LL T,N,M,W,l,r,c;
  scanf("%lld",&T);
  while(T--){
    v.clear();
    w.clear();
    LL S = 0;
    scanf("%lld %lld %lld", &N,&W,&M);
    for(LL i = 0; i < 4*N+1; i++){tree[i] = 0;lazy[i]=0;}
    for(LL i = 0; i < N; i++)arr[i] = INT_MAX;
    build_tree(1, 0, N-1);
    for(LL i=1;i<=N;i++){
      scanf("%lld",&Rating[i]);
      S+=Rating[i];
    }
    for(LL i=1;i<=M;i++){
      scanf("%lld %lld %lld",&(P[i].first.first),&(P[i].first.second),&(P[i].second));
    }
    sort(P+1,P+M+1,Mycompare);
    for(LL i=1;i<=M;i++){
      l = P[i].first.first;
      r = P[i].first.second;
      c = P[i].second;
      update_tree(1, 0, N-1, l-1, r-1, c);
    }
    for(LL j=1;j<=N;j++)
      minCost[j] =  query_tree(1,0,N-1,j-1,j-1);

    for(LL i=0;i<201;i++)
      VV[i].clear();
    for(LL i=1;i<=N;i++){
      if(Rating[i]<0){
        if(minCost[i]<=200)
          VV[minCost[i]].push_back(-Rating[i]);
      }
    }
    for(LL i=1;i<=200;i++){
      sort(VV[i].rbegin(),VV[i].rend());
    }
    v.push_back(1);
    w.push_back(1);
    for(LL i=1;i<=200;i++){
      LL P = 500/i;
      LL ZZ = min((LL)VV[i].size(),P);
      for(LL j=0;j<ZZ;j++){
        v.push_back(VV[i][j]);
        w.push_back(i);
      }
    }
    for(LL i=0;i<=W;i++){
      Ans[0][i] = 0;
    }
    LL SZ = v.size()-1;
    for(LL i=1;i<=SZ;i++){
      for(LL j=0;j<=W;j++){
        if(w[i]<=j){
          Ans[i][j] = max(Ans[i-1][j],Ans[i-1][j-w[i]]+v[i]);
        }
        else{
          Ans[i][j] = Ans[i-1][j];
        }
      }
    }
    printf("%lld\n",S+Ans[SZ][W]);
  }
  return 0;
}