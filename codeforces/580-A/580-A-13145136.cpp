#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
int a[100005];
int main(){
  int n,temp=0,ans=1;
  cin >> n;
  for(int i=1;i<=n;i++){
    cin >> a[i];
  }
  for(int i=1;i<=n;i++){
    if(a[i]>=a[i-1]){
      temp++;
    }
    else{
      ans = max(ans,temp);
      temp = 1;
    }
  }
  ans = max(ans,temp);
  cout << ans << endl;
  return 0;
}