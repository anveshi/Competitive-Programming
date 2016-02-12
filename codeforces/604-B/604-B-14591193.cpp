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
int A[Maxn];
int main(){
  fastIO();
  int n,k;
  cin >> n >> k;
  for(int i=1;i<=n;i++){
    cin >> A[i];
  }
  if(k>=n){
    cout << A[n] << endl;
    return 0;
  }
  int x = (n-k);
  int tox = (n-k)*2;
  //trace2(x,tox);
  int Ans = INT_MIN;

  for(int i=1;i<=x;i++){
    Ans = max(Ans,A[i]+A[tox-i+1]);
  }
  for(int i=tox+1;i<=n;i++){
    Ans = max(Ans,A[i]);
  }
  cout << Ans << endl;
  return 0;
}