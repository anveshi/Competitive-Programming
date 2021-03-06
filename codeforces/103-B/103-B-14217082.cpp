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

const int Maxn = 200;

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
  int size(int N){
    int Ret =0;
    for(int i=1;i<=N;i++){
      Ret += (par[i]<-1);
    }
    return Ret;   
  }
  int get_parent(int v){
    return par[v];
  }
};
pair <int,int> p[Maxn];

int main(){
  fastIO();
  int N,M,X,Y;
  cin >> N >> M;
  bool Ok = !(M<3 || M!=N);
  if(M<3 || M!=N)
    Ok = false;
  union_find U(Maxn);

  for(int i=0;i<M;i++){
    cin >> X >> Y;
    p[i] = {X,Y};
    U.merge(X,Y);
  }

  Ok &= (U.size(N)==1);
  int Cnt = 0;
  if(!Ok){
    cout << "NO" << endl;
    return 0;
  }

  for(int i=1;i<=N;i++){
    if(U.root(i)==i)
      Cnt++;
  }
  if(Cnt!=1)
    Ok = false;
  cout << (Ok?"FHTAGN!":"NO") << endl;
  
  return 0;
}