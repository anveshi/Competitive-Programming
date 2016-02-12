#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
vector <int> ans;
int is_prime[1005];
void  seive(int n){
  for(int i=0;i<=n;i++){
    is_prime[i] = 1;
  }
  for(int i=2;i<=n;i++){
    if(is_prime[i]){
      for(int j=i;j<=n;j*=i){
        ans.push_back(j);
        is_prime[j]=0;
      }
      for(int j=i;j<=n;j+=i){
        is_prime[j]=0;
      }
    }
  }
  sort(ans.begin(), ans.end());
  int sz = ans.size();
  cout << sz << endl;
  for(int i=0;i<sz;i++){
    cout << ans[i] << " ";
  }
  cout << endl;
  return ;
}
int main(){
  int n;
  cin >> n;
  seive(n);
  return 0;
}