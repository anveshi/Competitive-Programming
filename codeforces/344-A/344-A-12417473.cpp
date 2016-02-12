/*
He slept beneath the moon
He basked beneath the sun
He lived a life of going to do
and died with nothing done.
*/
#include <bits/stdc++.h>
using namespace std;
char s[100001][3];
int main(){
  int n,ans=0;
  cin >> n;
  for(int i=0;i<n;i++){
    cin >> s[i];
  }
  for(int i=0;i<n-1;i++){
    if(s[i][1]==s[i+1][0])
      ans++;
  }
  cout << ans+1 << endl;
  return 0;
}