#include <bits/stdc++.h>
using namespace std;
int a[2000010];
int main(){
  int n,m,k;
  cin >> n >> m;
  if(m<n-1 || m>2*(n+1)){
    cout << -1 << endl;
    return 0;
  }

  for(int i=2;i<=2*n;i+=2){
    a[i] = 1;
  }
  for(int j=0;j<2;j++){
    for(int i=3;i<=2*n-1 && m>0;i+=2){
      a[i] += 1;
      m--;
    }
  }
  if(m>0){
    a[1]++;m--;
  }
  if(m>0){
    a[1]++;m--;
  }

  if(m>0){
    a[2*n+1]++;m--;
  }
  if(m>0){
    a[2*n+1]++;m--;
  }
  assert(m==0);
  string ans = "";
  for(int i=1;i<=2*n+1;i++){
    if(i%2==1){
      while(a[i]--)
        ans+="1";
    }
    else{
      if(a[i])
        ans += "0";
    }
  }
  cout << ans << endl;
  return 0;
}