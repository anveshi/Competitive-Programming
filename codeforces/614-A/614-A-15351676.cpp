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

const int Maxn = 200005;
vector <LL> v;

int main(){
  fastIO();
  LL l,r,k;
  LL P = 1;
  //trace1(LONG_MAX);
  cin >> l >> r >> k;

  while(P<=r){
    if(P<=r && P>=l)
      v.push_back(P);
    if(P <= r/k){
      P *= k;
    }
    else
      break;
  }
  
  if(v.size()==0)
    cout << -1 << endl;
  else{
    for(int i=0;i<v.size();i++){
      cout << v[i] << " ";
    }
    cout << endl;
  }
  return 0;
}