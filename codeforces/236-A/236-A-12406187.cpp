#include <bits/stdc++.h>
using namespace std;
int main(){
  string s;
  cin >> s;
  map<char, int> M;
  for(int i=0;s[i];i++){
    M[s[i]]++;
  }
  if((M.size())&1){
    cout << "IGNORE HIM!" << endl;
  }
  else
    cout << "CHAT WITH HER!" << endl;

  return 0;
}