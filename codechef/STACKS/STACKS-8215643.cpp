#include <bits/stdc++.h>
using namespace std;
int t,n,x;
multiset <int> S;
multiset<int>::iterator it;
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cin >> t;
  while(t--){
    S.clear();
    cin >> n;
    for(int i=0;i<n;i++){
      cin >> x;
      it = S.upper_bound(x);
      if(it==S.end()){
        S.insert(x);
      }
      else{
        S.erase(it);
        S.insert(x);
        //(*it) = x;
      }
    }
    cout << S.size() << " ";
    for(multiset<int>::iterator it=S.begin();it!=S.end();it++){
      cout << (*it)  << " ";
    }
    cout << endl;
  }
  return 0;
}