#include <bits/stdc++.h>
using namespace std;
int main(){
  int t;
  int cnt[26];
  char s[100005];
  scanf("%d",&t);
  while(t--){
    scanf("%s",s);
    for(int i=0;i<26;i++){
      cnt[i]=0;
    }
    int n = strlen(s);
    for(int i=0;i<n;i++){
      cnt[s[i]-'a']++;
    }
    int ans =0;
    for(int i=0;i<26;i++){
      if(cnt[i]>0)
        ans++;
    }
    if(ans&1)
      cout << "Counter Terrorist\n";
    else
      cout <<  "Terrorist\n";
  }
  return 0;
}