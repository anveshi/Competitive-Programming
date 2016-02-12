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
  int N;
  cin >> N;
  int Ans = 0;
  for(int i=1;i<=N;i++){
    for(int j=i;j<=N;j++){
      int X = i*i + j*j;
      int S = sqrt(X);
      if(S<=N && S*S==X)
        Ans++; 
    }
  }
  cout << Ans << endl;
  return 0;
}