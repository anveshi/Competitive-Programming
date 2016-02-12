#include <bits/stdc++.h>
using namespace std;
int main(){
  string s;
  int n,t;
  vector <int> v;
  cin >> n >> t;
  cin >> s;
  for(int i=0;i<t;i++){
    v.clear();
    for(int j=0;j<n-1;j++){
      if(s[j]=='B'&&s[j+1]=='G')
        v.push_back(j);
    }
    for(int j=0;j<v.size();j++){
      swap(s[v[j]],s[v[j]+1]);
    }
  }
  cout << s << endl;
  return 0;
}