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
const int Maxn = 10000005;
LL BIT[Maxn];

void update(int idx,int val){
  while(idx<Maxn){
    BIT[idx] += val;
    idx += idx&-idx;
  }
}

LL read(int idx){
  LL Sum = 0LL;
  while(idx>0){
    Sum += BIT[idx];
    idx -= idx&-idx;
  }
  return Sum;
}


int main(){
  fastIO();
  int T,N,x;
  scanf("%d",&T);
  while(T--){
    LL Ans = 0LL,S=0LL;
    memset(BIT,0,sizeof BIT);
    scanf("%d",&N);
    for(int i=1;i<=N;i++){
      scanf("%d",&x);
      Ans += (i-1-read(x));
      update(x,1);
    }
    printf("%lld\n",Ans);
  }
  return 0;
}
