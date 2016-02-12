// Anve$hi $hukla

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
const LL Maxn = 100005;

LL n,m,k,x,y;
LL A[Maxn];
LL tree1[Maxn],tree[Maxn];

void update1(LL idx,LL val){
  while(idx<Maxn){
    tree1[idx] += val;
    idx += idx&-idx;
  }
}
LL read1(LL idx){
  LL Sum = 0LL;
  while(idx>0){
    Sum += tree1[idx];
    idx -= idx&-idx; 
  }
  return Sum;
}
LL C[Maxn],l[Maxn],r[Maxn],d[Maxn];
void update(LL idx,LL val){
  while(idx<Maxn){
    tree[idx] += val;
    idx += idx&-idx;
  }
}
LL read(LL idx){
  LL Sum = 0;
  while(idx > 0){
    Sum += tree[idx];
    idx -= idx&-idx;
  }
  return Sum;
}
LL readSingle1(LL idx){
  LL sum = tree1[idx]; // sum will be decreased
  if (idx > 0){ // special case
    LL z = idx - (idx & -idx); // make z first
    idx--; // idx is no important any more, so instead y, you can use idx
    while (idx != z){ // at some iteration idx (y) will become z
      sum -= tree1[idx]; 
      // substruct tree frequency which is between y and "the same path"
      idx -= (idx & -idx);
    }
  }
  return sum;
}

LL readSingle(LL idx){
  LL sum = tree[idx]; // sum will be decreased
  if (idx > 0){ // special case
    LL z = idx - (idx & -idx); // make z first
    idx--; // idx is no important any more, so instead y, you can use idx
    while (idx != z){ // at some iteration idx (y) will become z
      sum -= tree[idx]; 
      // substruct tree frequency which is between y and "the same path"
      idx -= (idx & -idx);
    }
  }
  return sum;
}

LL K[Maxn];

main(){
  fastIO();
  cin >> n >> m >> k;
  for(LL i=1;i<=n;i++){
    cin >> A[i];
  }
  for(LL i=1;i<=m;i++){
    cin >> l[i] >> r[i] >> d[i];
  }
  for(LL i=0;i<k;i++){
    cin >> x >> y;
    update1(x,1);
    update1(y+1,-1);
  }
  for(LL i=1;i<Maxn;i++){
    C[i] = C[i-1]+ readSingle1(i);
  }
  for(LL i=1;i<=m;i++){
    update(l[i],d[i]*C[i]);
    update(r[i]+1,-1*d[i]*C[i]);
  }
  for(LL i=1;i<Maxn;i++){
    K[i] = K[i-1] + readSingle(i);
  }
  for(LL i=1;i<=n;i++){
    cout << K[i] + A[i] << " "; 
  }
  cout << endl;
  return 0;
}