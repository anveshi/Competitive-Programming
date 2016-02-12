#include <bits/stdc++.h>
using namespace std;
int main(){
  string s1,s2,s3="";
  cin >> s1 >> s2;
  for(int i=0;i<s1.length();i++){
    s3=s1[i]+s3;
  }
  cout << (s2==s3?"YES":"NO") << endl;
  return 0;
}