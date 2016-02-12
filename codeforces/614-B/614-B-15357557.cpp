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
string S[Maxn];
int main(){
  fastIO();
  int n;

  cin >> n;
  int flag = 0;
  int diff = -1;
  int Dj = 0;

  for(int i=0;i<n;i++){
    cin >> S[i];
    if(S[i]=="0")
      flag = 1;
    int zero=0,one=0,other=0;

    for(int j=0;j<S[i].length();j++){
      if(S[i][j]=='1')
        one++;
      else if(S[i][j]=='0')
        zero++;
      else
        other++;
    }

    if(other>0 || one>1){
      diff = i; 
    }
    else
      Dj += (S[i].length() - 1);
  }

  if(flag==1){
    cout << 0 << endl;
    return 0;
  }
  if(diff==-1){
    cout << 1;
      for(int i=0;i<Dj;i++)
        cout << 0;
      cout << endl;
    return 0;
  }
  cout << S[diff];
  for(int i=0;i<Dj;i++){
    cout << 0;
  }
  cout << endl;
  return 0;
}