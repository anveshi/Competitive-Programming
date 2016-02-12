#include <bits/stdc++.h>
using namespace std;
int main(){
  int n,m,x;
  scanf("%d %d",&n,&m);
  vector <bool> Possible(m,false);
  for(int i=0;i<n;i++){
    scanf("%d",&x);
    x%=m;
    vector <bool> temp(Possible);
    for(int j=0;j<m;j++)
      if(temp[j])
        Possible[(j+x)%m]=true;
    if(Possible[0])
      break;
    Possible[x] = true;
  }
  if(Possible[0])
    printf("YES\n");
  else
    printf("NO\n");
  return 0;
}