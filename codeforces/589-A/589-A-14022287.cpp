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
const LL Maxn = 500005;
const LL Mod = 1000000007;
const int inf = 10000001;
inline void fastIO(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
}
const string B = "@bmail.com";
string toLower(string v){
  string t = v;
  for(int i=0;i<v.length();i++){
    if(v[i]>='A' && v[i]<='Z')
      t[i] = v[i]^32;
  }
  if(t.length()>=10 && t.substr(t.length()-10,10)==B){
    string ret="";
    for(int i=0;i<v.length();i++){
      if(t[i]=='+' || t[i]=='@')
        break;
      else if(t[i]!='.')
        ret+= t[i];
    }
    return ret+B;
  }
  return t;
}
int main(){
  fastIO();
  int n;
  cin >> n;
  vector <string> v(n),tv(n);
  for(int i=0;i<n;i++){
    cin >> v[i];
    tv[i] = toLower(v[i]);
   // cout << tv[i] << endl;
  }
  vector <int> V[20005];
  map <string,int> M;
  M.clear();
  int idx = 0;
  for(int i=0;i<n;i++){
    if(M.find(tv[i])!=M.end())
      V[M[tv[i]]].push_back(i);
    else{
      idx++;
      M[tv[i]] = idx;
      V[idx].push_back(i);
      //trace2(idx,i);
    }

  }
  cout << M.size() << endl;
  for(int i=1;i<=idx;i++){
    cout << V[i].size();
    for(int j=0;j<V[i].size();j++){
      cout << " " <<  v[V[i][j]] ;
    }
    cout << endl;
  }
  return 0;
}