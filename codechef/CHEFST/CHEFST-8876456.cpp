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
int main(){
  fastIO();
  LL T, N1, N2, M;
  cin >> T;
  while(T--){
    cin >> N1 >> N2 >> M;
    M = (M*(M+1))/2;
    LL N = min(N1,N2);
    N  = min(M,N);
    LL Ans  = N1 + N2 - N - N;
    cout << Ans << endl;
  }
  return 0;
}