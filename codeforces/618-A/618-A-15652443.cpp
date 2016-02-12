// Anve$hi $hukla
#include <bits/stdc++.h>
using namespace std;

const int Maxn = 200005;
typedef long long LL;
inline void fastIO(){
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
}

int main(){
   fastIO();
   int n;
   cin >> n;
   vector <int> v;
   for(int i=0;i<25;i++){
      if(n&(1<<i)){
         v.push_back(i+1);
      }
   }
   sort(v.rbegin(), v.rend());
   for(auto x: v)
      cout << x << " ";
   cout << endl;
   return 0;
}