#include <bits/stdc++.h>
using namespace std;

typedef long long LL;
const int Mod = 1000000007;
const int Maxn = 1010101;

LL p,k,Ans;

bool visited[Maxn];

void dfs(LL v){
  visited[v] = true;
  if(!visited[v*k%p])
    dfs(v*k%p);
}

int main(){
  cin >> p >> k;
  Ans = 1;
  if(k==1)
    Ans = p;

  for(int i=1;i<p;i++){
    if(!visited[i]){
      dfs(i);
      Ans = Ans*p%Mod;
    }
  }

  cout << Ans << endl;
  return 0;
}