#include<bits/stdc++.h>
using namespace std;
map <int,int> m;
int n;
bool a[123][123];
int check(){
  int ret = 0,i,j;
  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      if(m[j]^a[i][j])
        continue;
      else break;
    }
    j==n?ret++:0;
  }
  return ret;
}
int main(){
  int i,j,ans=0;
  string s;
  cin >> n;
  for(i=0;i<n;i++){
    cin >> s;
    for(j=0;j<n;j++){
      a[i][j] =  s[j]-'0';
    }
  }
  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      if(!a[i][j])
        m[j]=1;
    }
    int x = check();
    ans = max(ans,x);
    m.clear();
  }
  printf("%d\n",ans);
  return 0;
}