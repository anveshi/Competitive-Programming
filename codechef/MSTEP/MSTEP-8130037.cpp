#include <bits/stdc++.h>
using namespace std;
pair <int,int> p[501*501];
int main(){
  int t,n,x;
  scanf("%d",&t);
  while(t--){
    scanf("%d",&n);
    for(int i=0;i<n;i++){
      for(int j=0;j<n;j++){
        cin >> x;
        p[x] = {i,j};
      }
    }
    int ans =0;
    for(int i=1;i<n*n;i++){
      ans += ( abs(p[i+1].first - p[i].first)
              + abs(p[i+1].second - p[i].second) );
    }
    printf("%d\n",ans);
  }
  return 0;
}