#include <bits/stdc++.h>
using namespace std;

const int Maxn = 1005;
vector <int> ans;
multiset <int> m;

int main(){

  int n,x;
  cin >> n;

  for(int i=0;i<n*n;i++){
    cin >> x;
    m.insert(x);
  }

  multiset <int> :: iterator it;
  //it = max_element(m.begin(), m.end());  takes O(n) :( 
  it = --m.end();
  ans.push_back(*it);
  m.erase(it);

  while(ans.size()!=n){
    //it = max_element(m.begin(), m.end());
    it = --m.end();
    int val = *it;
    m.erase(it);
    for(int i=0;i<ans.size();i++){
      int g = __gcd(val,ans[i]);
      m.erase(m.find(g));
      m.erase(m.find(g));
    }
    ans.push_back(val);
  }
  for(int i=0;i<n;i++)
    cout << ans[i] << " ";
  
  cout << endl;
  return 0;
}