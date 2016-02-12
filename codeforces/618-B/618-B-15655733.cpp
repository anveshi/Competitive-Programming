// Anve$hi $hukla
#include <bits/stdc++.h>
using namespace std;

const int Maxn = 200005;
typedef long long LL;
inline void fastIO(){
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
}
int A[200][200];
int main(){
   fastIO();
   int n, x1, x2;
   cin >> n;
   for(int i=1;i<=n;i++){
      for(int j=1;j<=n;j++){
         cin >> A[i][j];
         if(A[i][j] == n-1){
            x1 = i, x2 = j;
         }
      }
   }
   vector <int> Ans1(n+1), Ans2(n+1);
   for(int i=1;i<=n;i++){
      Ans1[i] = A[x1][i];
      Ans2[i] = A[i][x2];
      if(Ans1[i]==0)
         Ans1[i] = n;
      if(Ans2[i]==0)
         Ans2[i] = n;
   }
   int flag = 1;
   for(int i=1;i<=n;i++){
      for(int j=1;j<=n;j++){
         if(i==j)
            continue;
         if(min(Ans1[i], Ans1[j])!=A[i][j])
            flag = 0;
      }
   }
   if(flag == 1){
      for(int i=1;i<=n;i++){
         cout << Ans1[i] << " ";
      }
   }
   else{
      for(int i=1;i<=n;i++){
         cout << Ans2[i] << " ";
      }
   }
   cout << endl;
   return 0;
}