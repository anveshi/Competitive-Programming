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
const LL Maxn = 1000000007;

inline void fastIO(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
}

int main(){
  fastIO();
  int n;
  cin >> n;
  vector <string> s(n);
  for(int i=0;i<n;i++){
    cin >> s[i];
  }
  int ans = 0;
  for(int i=0;i<26;i++){
    for(int j=0;j<26;j++){
      int temp = 0;
      for(int k=0;k<n;k++){
        int f=0;
        for(int l=0;l<s[k].length();l++){
          if((s[k][l]-'a' == i) || (s[k][l]-'a' ==j))
            continue;
          else
            f = 1;
        }
        if(f==0)
          temp += s[k].length();
      }
      ans = max(ans,temp);
    }
  }
  cout << ans << endl;

  return 0;
}