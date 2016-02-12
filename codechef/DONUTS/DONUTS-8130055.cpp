#include <bits/stdc++.h>
using namespace std;
int a[100006];
int main(){
  int t,n,m,ans;
  scanf("%d",&t);
  while(t--){
    scanf("%d%d",&n,&m);
    for(int i=0;i<m;i++){
      scanf("%d",&a[i]);
    }
    sort(a,a+m);
    int l=0,r=m-1,ans=0;
    while(l<r){
      a[l]--;
      r--;ans++;
      if(a[l]==0)l++;
    }
    cout << ans << endl;
  }
  return 0;
}