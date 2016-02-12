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
const int Maxn = 110000;
pair <LL,LL> p[Maxn];
int main(){
  fastIO();
  LL n,x,y,a,b;
  cin >> n;
  cin >> x >> y;
  for(int i=0;i<n;i++){
    cin >> a >> b;
    p[i].first = a*x+b;
    p[i].second = a*y+b;
  }
  sort(p,p+n);
  int Ok = 1;
  LL temp = p[0].second;
  for(int i=1;i<n;i++){
    if(p[i].second<temp){
      Ok = 0;
      break;
    }
    temp = p[i].second;
  }
  if(!Ok)
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
  return 0;
}