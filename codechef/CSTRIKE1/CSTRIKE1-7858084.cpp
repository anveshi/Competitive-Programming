#include <bits/stdc++.h>
using namespace std;
int a[505];
const int Maxn = 250555;
bool dp[Maxn];
int main(){
  int t,n,sum;
  scanf("%d",&t);
  while(t--){
    scanf("%d",&n);
    sum=0;
    for(int i=0;i<n;i++){
      scanf("%d",&a[i]);
      sum+=a[i];
    }
    if(sum&1){
      printf("NO\n");
      continue;
    }
    for(int i=0;i<Maxn;i++){
      dp[i] = false;
    }
    //sort(a,a+n);
    dp[0]=true;
    for(int i=0;i<n;i++){
      for(int j=0;j<=(Maxn/2);j++){
        if(dp[j]==true){
          dp[j+a[i]]=true;
        }
      }
    }
    if(dp[sum/2])
      printf("YES\n");
    else
      printf("NO\n");
  }
  return 0;
}