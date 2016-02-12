// Anve$hi $hukla
#include <bits/stdc++.h>
using namespace std;

const int Maxn = 200005;
typedef long long LL;
inline void fastIO(){
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
}
LL A[Maxn];
int main(){
   fastIO();
   LL n, Ans = 0LL, minOdd = 1000000002LL;
   cin >> n;
   for(int i=0;i<n;i++){
      cin >> A[i];
      Ans += A[i];
      if(A[i]%2==1 && A[i] < minOdd)
         minOdd = A[i];
   }
   if(Ans%2==0)
      cout << Ans << endl;
   else{
      Ans = max(Ans - minOdd, 0LL);
      cout << Ans   << endl;
   }
   return 0;
}