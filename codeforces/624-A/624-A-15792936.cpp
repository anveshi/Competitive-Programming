// Anve$hi $hukla
#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const int Maxn = 200005;

inline void fastIO(){
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
}

int main(){
   fastIO();
   cout << fixed;
   cout << setprecision(10);
   double l, d, v1, v2, Ans;
   cin >> d >> l >> v1 >> v2;
   Ans = (double)(l-d)/(double)(v1+v2);
   if(Ans<0.0)
      Ans = 0.0;
   cout << Ans << endl;    
   return 0;
}