#include<bits/stdc++.h>
using namespace std;
string s;
map <string, int> m;
int main(){
  int n,ans=0;
  cin >> n;
  while (n--){
    cin >> s;
    ans = max(ans, ++m[s]);
  }
  cout << ans << "\n";
}