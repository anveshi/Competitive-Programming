#include <bits/stdc++.h>
using namespace std;

static int LIS(vector <int> &v){
  int n = v.size();
  vector <int> Dp(n+1,-1);
  for(int i=0;i<n;i++){
    if(Dp[v[i]-1] == -1)
      Dp[v[i]] = 1;
    else
      Dp[v[i]] = Dp[v[i]-1] + 1;
  }
  return *max_element(Dp.begin(), Dp.end());
}
void fastIO(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
}
int main(){
  fastIO();
  int n,ans;
  cin >> n;
  vector <int> a(n);
  for(int i=0;i<n;i++){
    cin >> a[i];
  }
  ans = LIS(a);
  cout << n-ans << endl;
  return 0;
}