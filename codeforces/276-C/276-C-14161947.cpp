// Anve$hi $hukla
// BIT

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
const LL Mod = 1000000007;
const int Maxn = 200005;
LL tree[Maxn];
LL A[Maxn],C[Maxn];

void update(int idx,int val){
  while(idx<Maxn){
    tree[idx] += val;
    idx += idx&-idx;
  }
}

LL read(LL idx){
  LL Sum = 0LL;
  while(idx>0){
    Sum += tree[idx];
    idx -= idx&-idx;
  }
  return Sum;
}

LL readSingle(int idx){
  LL Sum = tree[idx];
  if(idx>0){
    int z = idx - (idx&-idx);
    idx--;
    while(idx!=z){
      Sum -= tree[idx];
      idx -= idx&-idx;
    }
  }
  return Sum;
}

int main(){
  fastIO();
  int N,Q,X,Y;
  cin >> N >> Q;
  
  for(int i=1;i<=N;i++)
    cin >> A[i];

  sort(A+1,A+N+1);

  for(int i=1;i<=Q;i++){
    cin >> X >> Y;
    update(X,1);
    update(Y+1,-1);
  }
  for(int i=1;i<Maxn;i++)
    C[i] = C[i-1] + readSingle(i);
  
  sort(C+1,C+N+1);
  LL Ans = 0;

  for(int i=1;i<=N;i++)
    Ans += C[i]*A[i];
  
  cout << Ans << endl;
  return 0;
}