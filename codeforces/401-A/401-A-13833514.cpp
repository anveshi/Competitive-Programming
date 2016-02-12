#include <bits/stdc++.h>
using namespace std;
int main(){
  int n,k,x,sum=0;
  cin >> n >> x;
  for(int i=0;i<n;i++){
    cin >> k;
    sum+=k;
  }
  sum = abs(sum);
  int ans = 0;
  while(ans<sum){
    ans += x;
  }
  cout << (ans/x) << endl;
 
 // ans = (sum/x) + ((sum%x)!=0);
 // cout << ans << endl;  
  
  return 0;
}