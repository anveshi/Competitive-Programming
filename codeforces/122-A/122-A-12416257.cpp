#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
int main(){
  map<LL, LL> M;
  for(int i=1;i<4;i++){
    for(int j=0;j<(1<<i);j++){
      int val = 0;
      for(int k=0;k<i;k++){
        if(j&(1<<k))
          val=val*10+4;
        else
          val=val*10+7;
      }
      M[val]=1;
    }
  }
  int n;
  cin >> n;
  for(map<LL,LL>:: iterator it=M.begin();it!=M.end();it++){
    if(n%(it->first)==0){
      cout << "YES" << endl;
      return 0;
    }
  }
  cout << "NO" << endl;

  return 0;
}