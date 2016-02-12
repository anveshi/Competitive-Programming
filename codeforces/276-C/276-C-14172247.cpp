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

class BIT{
  // 1 indexed

  int *tree, sz; 
  public:

  BIT(int N) {
    sz = N;
    tree = new int[N+1];
  }

  ~BIT() {
    delete [] tree;
  }

  // Update idx'th element by Val 
  // increment or decrement idx'th element by Val 
  void update(int idx, int Val){
    if(idx<1 || idx>sz)
      return;
    while(idx<=sz){
      tree[idx] += Val;
      idx += idx&-idx;
    }
  }

  // returns sum of range[1.....idx]

  int read(int idx){
    int Sum = 0;
    while(idx>0){
      Sum += tree[idx];
      idx -= (idx&-idx);
    }
    return Sum;
  }

  // returns sum of range[l.....r]
  int rangeSum(int l, int r){
    return read(r) - read(l-1);
  }

  // returns same as 
  // RangeSum(idx,idx) or read(idx) - read(idx-1)
  // O(log(n)); instead of 2*O(log(n))

  int readSingle(int idx){
    int sum = tree[idx]; // sum will be decreased
    if (idx > 0){ // special case
      int z = idx - (idx & -idx); // make z first
      idx--; // idx is no important any more, so instead y, you can use idx
      while (idx != z){ // at some iteration idx (y) will become z
        sum -= tree[idx]; 
        // substruct tree frequency which is between y and "the same path"
        idx -= (idx & -idx);
      }
    }
    return sum;
  }

  int size(){
    return sz;
  }
};

typedef long long LL;
inline void fastIO(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
}
const int Maxn = 200005;
int A[Maxn],C[Maxn];

int main(){
  fastIO();
  int N,Q,X,Y;
  cin >> N >> Q;
  for(int i=1;i<=N;i++){
    cin >> A[i];
  }
  sort(A,A+N+1);
  BIT B(Maxn);
  while(Q--){
    cin >> X >> Y;
    B.update(X,1);
    B.update(Y+1,-1);
  }
  for(int i=1;i<=N;i++){
    C[i] = C[i-1] + B.readSingle(i);
  }
  sort(C,C+N+1);
  LL Ans = 0LL;
  for(int i=1;i<=N;i++){
    Ans  += ((LL)C[i]*(LL)A[i]);
  }
  cout << Ans << endl;

  return 0;
}