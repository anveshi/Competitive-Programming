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
int f[Maxn],b[Maxn],Ans[Maxn];
map <int,int> M;
string S1= "Possible";
string S2 = "Ambiguity";
string S3 = "Impossible";
int main(){
  fastIO();
  int n,m;
  cin >> n >> m;
  for(int i=1;i<=n;i++){
    cin >> f[i];
    if(M[f[i]]==0){
      M[f[i]] = i;
    }
    else{
      M[f[i]] = -1;
    }
  }
  for(int i=1;i<=m;i++){
    cin >> b[i];
  }
  bool ambiguity = false, impossible = false;
  for(int i=1;i<=m;i++){
    int Z = M[b[i]];
    if(Z==0)
      impossible = true;
    if(Z==-1)
      ambiguity = true;
    else
      Ans[i] = Z;
  }
  if(impossible){
    cout << S3 << endl;
    return 0;
  }
  if(ambiguity){
    cout << S2 << endl;
    return 0;
  }
  cout << S1 << endl;
  for(int i=1;i<=m;i++){
    cout << Ans[i] << " ";
  }
  cout << endl;

  return 0;
}