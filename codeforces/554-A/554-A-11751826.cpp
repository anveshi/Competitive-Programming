#include<bits/stdc++.h>
using namespace std;
int main(){
  string s;
  cin >> s;
  map <string, int> m;
  m.clear();
  int n = s.length();
  for(int i=0;i<=n;i++){
    for(int j=0;j<26;j++){
      string t,t1,t2,t3;
      t1 = s.substr(0,i);
      t2 = (char)('a'+j);
      t3 = s.substr(i,n-i);
      t = t1+t2+t3;
      m[t]++;
    }
  }
  assert(m.size() == 25*(n+1)+1);
  cout << m.size() << endl;
}