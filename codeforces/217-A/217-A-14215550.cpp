// Anve$hi $hukla
// Until the lion learns how to write, every story will glorify the hunter.

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
class union_find{
  vector <int> par;
  public:
  union_find(int n){
    par = vector <int>(n);
    for(int i=0;i<n;i++){
      par[i] = -1;
    }
  }
  int root(int v){
    return par[v]<0?v:(par[v]=root(par[v]));
  }
  
  void merge(int x,int y){
    if((x=root(x)) == (y=root(y)))
      return;
    if(par[y] < par[x])
      swap(x,y);
    par[x] += par[y];
    par[y] = x;
  }
  int size(int n){
    if(par[n]<-1)
      return -par[n];
    return 0;
  }
};

int main(){
  fastIO();
  int N,X,Y;
  union_find U(2001);
  cin >> N;
  for(int i=0;i<N;i++){
    cin >> X >> Y;
    Y+=1000;
    U.merge(X,Y);
  }
  int Ans = 0;
  for(int i=0;i<2001;i++){
    if(U.size(i))
      Ans++;
  }
  cout << Ans - 1 << endl;
  return 0;
}