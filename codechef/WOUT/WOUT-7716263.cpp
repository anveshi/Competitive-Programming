//http://se7so.blogspot.in/2012/12/segment-trees-and-lazy-propagation.html
#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const LL N=1000010;
LL arr[N];
LL tree[4*N];
LL lazy[4*N];
void build_tree(LL n){
  for(LL i=0;i<=4*n+4;i++)
    tree[i]=0,lazy[i]=0;
}

void update_tree(LL node, LL a, LL b, LL i, LL j) {
  if(lazy[node] != 0) { 
    tree[node] += lazy[node]; 
    if(a != b) {
      lazy[node<<1] += lazy[node]; 
      lazy[(node<<1)+1] += lazy[node];
    }
    lazy[node] = 0; 
  }
  if(a > b || a > j || b < i) 
    return;

  if(a >= i && b <= j) {
    tree[node]++;
    if(a != b) {
      lazy[node<<1]++;
      lazy[(node<<1)+1]++;
    }
    return;
  }
  update_tree((node<<1), a, ((a+b)>>1), i, j); 
  update_tree(1+(node<<1), 1+((a+b)>>1), b, i, j); 
  tree[node] = (tree[node<<1]+tree[(node<<1)+1]);
}

LL query_tree(LL node, LL a, LL b, LL i, LL j) {
  if(a > b || a > j || b < i) return 0; 
  if(lazy[node] != 0) { 
    tree[node] += lazy[node]; 
    if(a != b) {
      lazy[node<<1] += lazy[node]; 
      lazy[(node<<1)+1] += lazy[node]; 
    }
    lazy[node] = 0;
  }

  if(a >= i && b <= j) 
    return tree[node];

  LL q1 = query_tree(node<<1, a, (a+b)>>1, i, j); 
  LL q2 = query_tree(1+(node<<1), 1+((a+b)>>1), b, i, j); 

  LL res = (q1 + q2); 

  return res;
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  LL t,n,h,x,y,ans;
  cin >> t; 
  while(t--){
    cin >> n >> h;
    build_tree(n+1);
    for(LL i=0;i<n;i++){
      cin >> x >> y;
      update_tree(1,0,n-1,x,y);
    }
    for(LL i=0;i<n;i++){
      arr[i] = n-query_tree(1,0,n-1,i,i);
    }
    ans=0;
    LL temp=0;
    for(int i=0;i<h;i++)
      ans+=arr[i];
    temp=ans;
    LL j=0;
    for(int i=h;i<n;i++){
      temp+=(arr[i]-arr[j]);
      ans = min(ans,temp);
      j++;
    }
    cout << ans << endl;
  }
  return 0;
}