#include <bits/stdc++.h>
using namespace std;
int a[105],b[105],ans=0;
int main(){
  int n,m;
  scanf("%d",&n);
  for(int i=0;i<n;i++){
    scanf("%d",&a[i]);
  }
  scanf("%d",&m);
  for(int i=0;i<m;i++){
    scanf("%d",&b[i]);
  }
  sort(a,a+n);
  sort(b,b+m);
  int p1=0,p2=0;
  while(p1<n && p2<m){
    if(abs(a[p1]-b[p2])<=1){
      p1++,p2++;ans++;
    }
    else if(a[p1]>b[p2])
      p2++;
    else
      p1++;
  }
  cout << ans << endl;
  return 0;
}