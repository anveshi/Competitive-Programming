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
int cnt[26];

void printa(){
  for(int i=0;i<26;i++){
    for(int j=0;j<cnt[i]/2;j++){
      cout << char('a'+i);
    }
  }
}
void printr(){
  for(int i=25;i>=0;i--){
    for(int j=0;j<cnt[i]/2;j++){
      cout << char('a'+i);
    }
  }
}
void print(){
  for(int i=0;i<26;i++){
   // trace2(i,cnt[i]);
  }
  printa();
  for(int i=0;i<26;i++){
    if(cnt[i]%2==1){
      cout << (char)('a'+i) ;
    }
  }
  printr();
  cout << endl;
}
int main(){
  fastIO();
  string s;
  cin >> s;
  for(int i=0;i<s.length();i++){
    cnt[s[i]-'a']++;
  }

  vector <int> o,e;
  
  for(int i=0;i<26;i++){
    if(cnt[i]%2==0)
      e.push_back(i);
    else
      o.push_back(i);
  }
  if(o.size()<=1){
    print();
  }
  else{
    for(int i=0;i<o.size()/2;i++){
      int x = o[i];
      int y = o[o.size()-i-1];
     //trace2(x,y);
      cnt[x]++;
      cnt[y]--;
    }
    print();
  }
  return 0;
}