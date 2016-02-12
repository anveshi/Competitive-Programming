// Anve$hi $hukla
#include <bits/stdc++.h>
using namespace std;

const int Maxn = 200005;
typedef long long LL;
inline void fastIO(){
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
}
pair <pair <LL,LL>, LL > P[Maxn];
int main(){
   fastIO();
   LL n,X,Y;
   cin >> n;
   for(int i=1;i<=n;i++){
      cin >> X >> Y;
      P[i].first.first = X;
      P[i].first.second = Y;
      P[i].second = i;
   }
   sort(P+1, P+n+1);
   LL Ax, Ay, Bx, By, Cx, Cy, area, MinArea, Ans = 3LL;
   Ax = P[1].first.first; Ay = P[1].first.second;
   Bx = P[2].first.first; By = P[2].first.second;
   for(int i=3;i<=n;i++){
      Cx = P[i].first.first, Cy = P[i].first.second;
      area = Ax*(By-Cy) + Bx*(Cy-Ay) + Cx*(Ay-By);
      if(area < 0LL)
         area *=(-1LL);
      if(area>0LL){
         Ans = P[i].second;
         break;
      }
   }
   cout << P[1].second << " " << P[2].second << " " << Ans << endl;
   return 0;
}