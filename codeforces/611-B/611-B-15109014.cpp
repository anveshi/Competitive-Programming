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

map <LL,LL> M;

int main(){
  fastIO();
  LL a,b;
  cin >> a >> b;
  for(LL i=2;i<64;i++){
    LL z = (1LL<<i) - 1LL;
    for(LL j=0;j<i-1;j++){
      LL temp1 = z;
      LL temp2 = ~(1LL<<j);
      LL temp3 = z&temp2;
      M[temp3] = 1;
    }
  }
  LL Ans = 0;
  for(map<LL,LL>:: iterator it= M.begin();it!=M.end();it++){
    LL K  = it->first;
    if(K>=a && K<=b)
      Ans++;
  }
  cout << Ans << endl;
  return 0;
}