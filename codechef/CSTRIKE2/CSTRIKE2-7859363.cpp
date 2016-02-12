#include <bits/stdc++.h>
using namespace std;
const int Maxn = 100005;
const int Max =  2000005;
int a[Maxn],ans,cnt[Max];
int main(){
  int n,t;
  scanf("%d",&t);
  while(t--){
    int R=0;
    scanf("%d",&n);
    for(int i=0;i<Max;i++){
      cnt[i] = 0;
    }
    for(int i=0;i<n;i++){
      scanf("%d",&a[i]);
      if(R<a[i])
        R=a[i];
      cnt[a[i]]++;
    }
    ans = 1;
    for(int i=1;i<=R;i++){
      int k =0;
      for(int j=i;j<=R;j+=i){
        k+=cnt[j];
        if(k>=2)break;
      }
      if(k>=2)
        ans = max(ans,i);
    }
    printf("%d\n",ans);
  }
  return 0;
}