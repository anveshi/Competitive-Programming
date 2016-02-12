// Anve$hi $hukla
// ground - You can't fall if you don't climb, 
// but there's no joy in living your whole life on the ground.

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

const int Maxn = 1000005;

int A[Maxn],B[Maxn],F1[Maxn],F2[Maxn];
map <int,int> M1,M2,M;

int tree[Maxn];

void update(int idx,int val){
  while(idx<Maxn){
    tree[idx] += val;
    idx += idx&-idx; 
  }
}

LL read(int idx){
  LL Sum = 0LL;
  while(idx>0){
    Sum += tree[idx];
    idx -= idx&-idx;
  }
  return Sum;
}

int main(){
  fastIO();
  int N;
  cin >> N;
  for(int i=1;i<=N;i++)
    cin >> A[i];

  for(int i=1;i<=N;i++){
    M1[A[i]]++;
    F1[i] = M1[A[i]];
  }

  for(int i=N;i>=0;i--){
    M2[A[i]]++;
    F2[i] = M2[A[i]];
  }

  LL Ans = 0LL;
  for(int i=N;i>=2;i--){
      update(F2[i],1);
      Ans += read(F1[i-1]-1); 
  }
  cout << Ans << endl;
  return 0;
}