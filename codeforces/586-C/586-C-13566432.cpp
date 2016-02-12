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

LL v[Maxn],d[Maxn],p[Maxn];
int main(){ 
  fastIO();
  LL n;
  cin >> n;
  for(int i=0;i<n;i++){
    cin >> v[i] >> d[i] >> p[i];
  }
  vector <int> ans;
  ans.clear();
  for(int i=0;i<n;i++){
    if(p[i]>=0){
      ans.push_back(i+1);
    LL temp1=0,temp2=0, c=0;
    for(int j=i+1;j<n;j++){
      if(p[j]>=0){
      temp1 = max(v[i] - c,0LL);
      c++;
      p[j] = p[j] - temp1 - temp2;
      if(p[j]<0){
        temp2 += d[j];
      }
      }
    }
   }
  }
  int sz = ans.size();
  cout << sz << endl;
  for(int i=0;i<sz;i++){
    cout << ans[i] <<  " ";
  }
  cout << endl;
  return 0;
}