#include <bits/stdc++.h>
using namespace std;
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int a,b;
  cin >> a >> b;
  if(a<b)
    swap(a,b);
  int ans;
  ans = b;
  cout << ans << " ";
  ans = ((a-b)/2);
  cout << ans << endl;
  return 0;
}