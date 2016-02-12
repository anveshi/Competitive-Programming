#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
LL N,M,T;
double P[15][10005];
double CumP[15];
double Pkoijeete,Pserejajeete;
int main(){    
  scanf("%lld",&T);
  while(T--){
    scanf("%lld %lld",&N,&M);
    for(LL i=0;i<=20;i++)
      CumP[i] = 1.000000;
    for(LL i=1;i<=N;i++){
      for(LL j=1;j<=M;j++){
        scanf("%lf",&P[i][j]);
        CumP[i] = CumP[i]*P[i][j];
      }
    }
    Pserejajeete = CumP[1];
    Pkoijeete = 0.000000;
    for(int i=1;i<=N;i++){
      Pkoijeete+=CumP[i];
    }
    double ans;
    if(Pkoijeete==0)
      ans = 0;
    else 
      ans = (double)Pserejajeete/(double)Pkoijeete;
    cout.precision(6);
    cout << fixed << ans << endl;
  }
  return 0;
}