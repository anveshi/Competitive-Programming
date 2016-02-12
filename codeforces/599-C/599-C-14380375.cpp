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
int a[Maxn],b[Maxn];
multiset <int> s1,s2;

void Print(multiset <int>&S){
  for(auto x:S)
    cout << x <<  "  ";
  cout << endl;
}
int main(){
  fastIO();
  int n;
  cin >> n;
  for(int i=1;i<=n;i++){
    cin >> a[i];
    b[i] = a[i];
  }
  sort(b+1,b+n+1);
  int Ans = 0;
  for(int i=1;i<=n;i++){
    if(a[i]==b[i]){
      if(s1.empty() && s2.empty())
        Ans++;
      continue;
    }
    if(s2.find(a[i])!=s2.end())
      s2.erase(s2.find(a[i]));
    else
      s1.insert(a[i]);
    if(s1.find(b[i])!=s1.end())
      s1.erase(s1.find(b[i]));
    else
      s2.insert(b[i]);
    if(s1.empty() && s2.empty())
      Ans++;
  }
  cout << Ans << endl;
  return 0;
}