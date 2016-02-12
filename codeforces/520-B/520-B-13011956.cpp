#include <bits/stdc++.h>
using namespace std;
const int Maxn = 100000 + 10;
int n,m;
int mem[Maxn];

int solve(int x){
  if(x<0 || x>=Maxn)
    return 1e6;
  if(x==n)
    return 0;
  if(mem[x]!=-1)
    return mem[x];
  mem[x] = 1e6;
  //cout << typeof(mem[x]) << endl;
  mem[x] = min(solve(x+1)+1,x%2?(int)1e6:solve(x/2)+1);
  return mem[x];

}
int main(){
  memset(mem ,-1, sizeof mem);
  cin >> n >> m;
  cout << solve(m) << endl;

  return 0;
}