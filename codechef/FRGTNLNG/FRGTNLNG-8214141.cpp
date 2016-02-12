#include <bits/stdc++.h>
using namespace std;
vector <string> v1,v;
string s;
int t,n,k,l;
int ans[111];
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cin >> t;
  while(t--){
    v.clear();v1.clear();
    cin >> n >> k;
    for(int i=0;i<n;i++){
      cin >> s;
      v.push_back(s);
    }
    for(int i=0;i<k;i++){
      cin >> l;
      for(int j=0;j<l;j++){
        cin >> s;
        v1.push_back(s);
      }
    }
    for(int i=0;i<102;i++){
      ans[i]=0;
    }
    for(int i=0;i<n;i++){
      for(int j=0;j<v1.size();j++){
        if(v[i]==v1[j]){
          ans[i] = 1;break;
        }
      }
    }
    for(int i=0;i<n;i++){
      if(ans[i])
        cout << "YES";
      else
        cout << "NO";
      if(i!=n-1)cout <<" ";
      else cout << "\n"; 
    }
  }
  return 0;
}