// Anve$hi $hukla
#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const int Maxn = 200005;

inline void fastIO(){
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
}
map <LL,LL> M;
int main(){
   fastIO();
   LL n;
   M.clear();
   cin >> n;
   vector <LL> A(n);
   for(int i=0;i<n;i++){
      cin >> A[i];     
   }
   LL Ans = 0LL;
   sort(A.rbegin(), A.rend());
   for(int i=0;i<n;i++){
      for(int j=0;j<A[i];j++){
         if(M[A[i]-j]==0){
            Ans += (A[i]-j);
            M[A[i]-j] = 1;
            break;
         }
      }
   }
   cout << Ans << endl;
   return 0;
}