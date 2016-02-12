#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
int main(){
  LL n,m,ans=0LL;
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cin >> n >> m;
  int v[n];
  for(int i=0;i<n;i++){
    cin >> v[i];
  }
  for(int i=0,j=n-1;i<j;i+=m,j-=m){
    ans += v[j] - v[i];
  }
  cout << ans*2 << endl;
  return 0;
}