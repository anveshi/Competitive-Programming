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
const LL Maxn = 4005;
const LL Mod = 1000000007;

inline void fastIO(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
}
int a[55],b[55],c[55],p1[55],p2[55];
int main(){ 
  fastIO();
  int n;
  cin >> n;
  for(int i=1;i<n;i++){
    cin >> a[i];
  }
  for(int i=0;i<n-1;i++){
    cin >> b[i];
  }
  for(int i=0;i<n;i++){
    cin >> c[i];
  }
  for(int i=1;i<n;i++){
    p1[i] = p1[i-1] + a[i];
  }
  for(int i=n-1;i>=0;i--){
    p2[i] = p2[i+1] + b[i];
  }
  vector <int> v;
  v.clear();
  for(int i=0;i<n;i++){
    v.push_back(p1[i]+p2[i]+c[i]);
  }
  sort(v.begin(), v.end());
  cout <<  (v[0]+v[1]) << endl;
  return 0;
}