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

const LL Maxn = 200005;
string S1,S2;
LL pre0[Maxn],pre1[Maxn],suf0[Maxn],suf1[Maxn];

int main(){
  fastIO();
  cin >> S1 >> S2;
  pre0[0] = (S2[0]=='0');
  pre1[0] = 1-pre0[0];

  for(LL i=1;i<S2.length();i++){
    pre0[i] = pre0[i-1] + (S2[i]=='0');
    pre1[i] = pre1[i-1] + (S2[i]=='1');
  }

  LL m = S1.length(), n = S2.length();
  LL Ans = 0;
  for(LL i=0;i<m;i++){
    int Z = (i==0?0:pre0[i-1]);
    if(S1[i]=='0'){
      int j = n-m+i;
      int Z = (i==0?0:pre1[i-1]);
      Ans += (pre1[j] - Z);
    }
    else{
      int j = n-m+i;
      int Z = (i==0?0:pre0[i-1]);
      Ans += (pre0[j]-Z);
    }
  }
  cout << Ans << endl;
  return 0;
}