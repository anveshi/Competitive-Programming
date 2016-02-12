#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
vector <LL> v;
int main(){
  LL n,m,d,x;
  cin >>  n >>  m >> d;
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      cin >> x;
      v.push_back(x);
    }
  }
  sort(v.begin(), v.end());
  for(int i=1;i<n*m;i++){
    if(v[i]%d!=v[0]%d){
      cout << -1 << endl;
      return 0;
    }
  }
  int pivot = (n*m-1)/2;
  LL ans = 0;
  for(int i=0;i<n*m;i++){
    ans += (abs(v[i]-v[pivot]))/d;
  }
  cout << ans << endl;
  return 0;
}