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
LL Mod = 1000000007;
LL Mod1 = 1000000006;


const int Maxn = 200005;
map <LL,LL> M;


LL binpow2(LL a, LL n){
  LL res = 1LL;
  while(n){
    if(n&1LL)
      res = (res*a)%Mod;
    a=(a*a)%Mod;
    n >>= 1LL;
  }
  return res%Mod;
}

int main(){
  fastIO();
  LL N,m,x;
  cin >> m;
  for(int i=0;i<m;i++){
    cin >> x;
    M[x]++;
  }

  LL Ok = false;
  for(map<LL,LL> :: iterator it=M.begin();it!=M.end();it++){
    LL t = it->second;
    if(t%2==1){
      Ok = true;
      break;
    }
  }

  LL Base = 1LL,Exp=1LL;

  if(Ok==false){
    //perfect Square
    for(map<LL,LL> :: iterator it=M.begin();it!=M.end();it++){
      LL P = it->first;
      LL t = it->second;
      for(int i=0;i<(t/2);i++){
        Base *= P;
        if(Base>=Mod)
          Base %=Mod;
      }
      Exp = Exp*(t+1);
      if(Exp>=Mod1)
        Exp %= Mod1;
    }
  }

  else{
    bool flag = false;
    for(map<LL,LL> :: iterator it=M.begin();it!=M.end();it++){
      LL P = it->first;
      LL t = it->second;
      for(int i=0;i<t;i++){
        Base *= P;
        if(Base>=Mod)
          Base %=Mod;
      }
      if(flag==0 && (t+1)%2==0){
        Exp = Exp*((t+1)/2);
        flag = 1;
        if(Exp>=Mod1)
          Exp %= Mod1;
      }
      else{
        Exp = Exp*((t+1));
        if(Exp>=Mod1)
          Exp %= Mod1;
      }
    }
  }
  cout << binpow2(Base,Exp) << endl;
  return 0;
}