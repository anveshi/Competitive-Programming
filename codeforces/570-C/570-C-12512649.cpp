#include <bits/stdc++.h>
using namespace std;
int main(){
  int n,m,x;
  cin >> n >> m;
  string s,str;
  cin >> s;
  int ans =0,temp=0;
  for(int i=0;i<n;i++){
    if(s[i]=='.')
      temp++;
    else{
      if(temp>=2)
        ans += (temp-1);
      temp = 0;
    }
  }
  if(temp>=2){
    ans+=(temp-1);
  }
  while(m--){
    cin >> x >> str;
    x--;
    if(str[0]=='.'){
      if(s[x]!='.'){
        int f=0;
        if(x>0 && s[x-1]=='.')f++;
        if(x<n-1 && s[x+1]=='.')f++;
        ans+=f;
      }
    }
    else{
      if(s[x]=='.'){
        int f=0;
        if(x>0 && s[x-1]=='.')f++;
        if(x<n-1 && s[x+1]=='.')f++;
        ans-=f;
      }
    }
    s[x] = str[0];
    cout << ans << endl;
  }
  return 0;
}