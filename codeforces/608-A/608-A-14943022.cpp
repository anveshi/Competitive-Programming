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
int T[Maxn];
int main(){
  fastIO();
  int n,S,f,t;
  cin >> n >> S;
  for(int i=0;i<n;i++){
    cin >> f >> t;
    T[f] = max(T[f],t);
  }
  int Ans = 0;
  Ans = max(T[S],Ans);
  for(int i=S-1;i>=0;i--){
    Ans = max(Ans+1,S-i);
    Ans = max(T[i],Ans);
  }
  cout << Ans << endl;


  return 0;
}