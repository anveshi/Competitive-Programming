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
string s = "month";
int main(){
  fastIO();
  int n;
  string s1,s2;
  cin >> n >> s1 >> s2;
  if(s2==s){
    if(n<=29)
      cout << 12 << endl;
    else if(n==30)
      cout << 11 << endl;
    else if(n==31)
      cout << 7 << endl;
  }
  else{
    if(n==5 || n==6)
      cout << 53 << endl;
    else
      cout << 52 << endl;
  }
  return 0;
}