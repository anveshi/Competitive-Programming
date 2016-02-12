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
  int n,m,x;
  cin >> n >> m;
  vector <int> A(n);
  for(int i=0;i<n;i++){
    cin >> A[i];
  }
  sort(A.begin(), A.end());
  for(int i=0;i<m;i++){
    cin >> x;
    int ans = upper_bound(A.begin(), A.end(),x) - A.begin();
    cout << ans << " ";
  }
  cout << endl;
  return 0;
}