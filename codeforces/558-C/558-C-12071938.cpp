#include <bits/stdc++.h>
using namespace std;
const int Maxn = 100001;
const int Maxl = 18;
int n,x,cnt[Maxn+5],cost[Maxn+5],res[Maxn+5];
bool tmp[Maxn];
vector <int> v;
int main(){
  cin >> n;
  for(int t=0;t<n;t++){
    cin >> x;
    v.clear();
    for(int i=0;i<Maxl;i++){
      int a = x >> i;
      if(a==0)
        continue;
      for(int j=0;a<=Maxn;j++){
        if(tmp[a]==0){
          tmp[a] = 1;
          cost[a] = i+j;
          v.push_back(a);
          cnt[a]++;
        }
        else{
          cost[a] = min(cost[a],i+j); 
        }
        a*=2;
      }
    }
    for(int i=0;i<v.size();i++){
      tmp[v[i]]  = 0;
      res[v[i]] += cost[v[i]];
      cost[v[i]] = 0;
    }
  }
  int ans = INT_MAX;
  for(int i=1;i<Maxn;i++){
    if(cnt[i]==n){
      ans = min(ans,res[i]);
    }
  }
  cout << ans << endl;
  return 0;
}