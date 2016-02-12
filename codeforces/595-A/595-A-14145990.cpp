// Anve$hi $hukla

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
int A[405][405];

int main(){
  fastIO();
  int n,m;
  cin >> n >> m;
  for(int i=0;i<n;i++){
    for(int j=0;j<2*m;j++){
      cin >> A[i][j];
    }
  }
  int ans = 0;
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      if(A[i][2*j]==1 || A[i][2*j+1]==1 )
        ans++;
    }
  }
  cout << ans << endl;
  return 0;
}