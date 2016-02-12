#include <bits/stdc++.h>
using namespace std;
char s[2][200002];
int main(){
  cin.tie(NULL);
  int t,n,g1,g2;
  bool Ok;
  scanf("%d",&t);
  while(t--){
    Ok=true;
    scanf("%s %s",s[0],s[1]);
    n = strlen(s[0]);
    for(int i=0;i<n;i++){
      if(s[0][i]=='#'&&s[1][i]=='#')
        Ok=false;
    }
    if(!Ok){
      printf("No\n");
      continue;
    }
    g1=0,g2=0;
    if(s[0][0]=='#')
      g1=INT_MAX;
    else{
      int l1=0;
      for(int i=0;i<n;i++){
        if(s[l1][i]=='#'){
          g1++;
          l1^=1;
        }
      }
    }
    if(s[1][0]=='#')
      g2=INT_MAX;
    else{
      int l1=1;
      for(int i=0;i<n;i++){
        if(s[l1][i]=='#'){
          g2++;
          l1^=1;
        }
      }
    }
    printf("Yes\n");
    printf("%d\n",min(g1,g2));
  }
  return 0;
}