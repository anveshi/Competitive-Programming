#include <bits/stdc++.h>
using namespace std;
int cnt1[26],cnt2[26];
int main(){
  string s1,s2,s3;
  cin >> s1 >> s2 >> s3;
  for(int i=0;i<s1.length();i++){
    cnt1[s1[i]-'A']++;
  }
  for(int i=0;i<s2.length();i++){
    cnt1[s2[i]-'A']++;
  }
  for(int i=0;i<s3.length();i++){
    cnt2[s3[i]-'A']++;
  }
  for(int i=0;i<26;i++){
    if(cnt2[i]!=cnt1[i]){
      cout << "NO" << endl;
      return 0;
    }
  }
  cout << "YES" << endl;
  return 0;
}