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
 vector <int> v1,v2;
void fastIO(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
}
int n,t,x,y;
string s1,s2,s3;
char diff(char a,char b){
  for(int i=0;i<26;i++){
    if((char('a'+i)!=a) && (char('a'+i)!=b))
      return (char)('a'+i);
  }
}
void fun(int a,int b,int c){
 //trace3(a,b,c);
  assert(x==v1.size());
  assert(y==v2.size());
  for(int i=0;i<a;i++){
    int idx = v1[i];
    s3[idx] = s1[idx];
  }
  for(int i=a;i<2*a;i++){
    int idx = v1[i];
    s3[idx] = s2[idx];
  }
  for(int i=2*a;i<x;i++){
    int idx = v1[i];
    s3[idx] = diff(s1[idx],s2[idx]);
  }
  for(int i=0;i<c;i++){
    int idx = v2[i];
    s3[idx] = diff(s1[idx],s1[idx]);
  }
  for(int i=c;i<y;i++){
    int idx = v2[i];
    s3[idx] = s1[idx];
  }
  cout << s3 << endl;
  return;
}
int main(){  
  fastIO();
  cin >> n >> t;
  cin >> s1  >> s2;
  s3 = "";
  for(int i=0;i<n;i++){
    s3+="#";    
  }
  v1.clear();v2.clear();
  for(int i=0;i<n;i++){
    if(s1[i]!=s2[i])
      v1.push_back(i);
    else
      v2.push_back(i);
  }
  x = v1.size();
  y = v2.size();
  if(t<((x+1)/2) || t >n){
    cout << -1 << endl;
    return 0;
  }
  else{
    int a,c,diff;
    for(a=0;a*2<=x;a++){
      c = x-2*a;
      diff = c+a;
      if(t-diff<=y && a>=0 && c>=0 && (t-diff)>=0){
        fun(a,c,t-diff);
        return 0;
      } 
    }
  }
  
  return 0;
}