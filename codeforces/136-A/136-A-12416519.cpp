#include <bits/stdc++.h>
using namespace std;
int main(){
  int a[105],ans[105],n;
  cin >> n;
  for(int i=1;i<=n;i++){
    cin >> a[i];
    ans[a[i]]=i;
  }
  for(int i=1;i<=n;i++)
    cout << ans[i] << " ";
  cout << endl;
  return 0;
}