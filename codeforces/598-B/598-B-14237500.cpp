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
  string s;
  int T,x,y,k,l,n;
  cin >> s;
  cin >> T;
  string t,temp;
  while(T--){
    cin >> x >> y >> k;
    x--;y--;
    n = (y-x+1);
    t = "";
    for(int i=x;i<=y;i++){
      t += s[i];
    }
    k %= n;
    //trace3(x,y,k);
    temp = "";
    temp += t.substr(n-k,k);
    temp += t.substr(0,n-k);
    for(int i=x;i<=y;i++){
      s[i] = temp[i-x];
    }
  }
  cout << s << endl;
  return 0;
}