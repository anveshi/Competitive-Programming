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
const LL Maxn = 200005;
const LL Mod = 1000000007;

inline void fastIO(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
}
int M[27];
int a[Maxn],b[Maxn];
int main(){
  fastIO();
  int n,m;
  cin >> n >> m;
  string s,s1,s2;
  cin >> s;
  for(int i=0;i<26;i++){
    M[i] = i;
  }
  for(int i=0;i<m;i++){
    cin >> s1 >> s2;
    a[i] = s1[0]-'a';
    b[i] = s2[0]-'a';
  }
  for(int i=0;i<26;i++){
    int val = i;
    for(int j=0;j<m;j++){
      if(a[j]==val){
        val = b[j];
        continue;
      }
      else if(b[j]==val){
        val = a[j];
        continue;
      }
    }
    M[i] = val;
  }
  string ans = "";
  for(int i=0;i<n;i++){
    ans += (char)(M[s[i]-'a']+'a'); 
  }
  cout << ans << endl;
  return 0;
}