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
void fastIO(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
}
const int Mod = 10000009;
string s;
int main(){  
  fastIO();
  LL t,ans;
  cin >> t;
  while(t--){
    ans = 1;
    cin >> s;
    LL n = s.length();
    for(int i=0;i<n/2;i++){
      if(s[i]=='?' && s[n-i-1]=='?'){
        ans=(ans*26)%Mod;
      }
      else if(s[i]=='?' || s[n-i-1]=='?')
        continue;
      else if(s[i]!=s[n-i-1]){
        ans = 0;break;
      }
    }
    if(n%2==1){
      if(s[n/2]=='?')
        ans = (ans*26)%Mod;
    }
    cout << (ans%Mod) << endl;
  }
  return 0;
}