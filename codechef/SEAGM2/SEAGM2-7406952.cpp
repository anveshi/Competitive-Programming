#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
LL N,M,T;
double P[15][10005];
double CumP[15];
double PkoiNahijeete,Pserejajeete;
double mpow(double a, LL n){
  double ret=1.0000000;
  double b=a;
  while(n){
    if(n&1) 
      ret=(ret*b);
    b=(b*b);
    n>>=1;
  }
  return (double)ret;
}
int main(){    
  scanf("%lld",&T);
  while(T--){
    scanf("%lld %lld",&N,&M);
    for(LL i=0;i<=N;i++)
      CumP[i] = 1.000000;
    PkoiNahijeete = 1.000000;
    for(LL i=1;i<=N;i++){
      for(LL j=1;j<=M;j++){
        scanf("%lf",&P[i][j]);
        CumP[i] = CumP[i]*P[i][j];
      }
      PkoiNahijeete = PkoiNahijeete - CumP[i];
    }
    Pserejajeete = CumP[1];
    double ans=0.000000 ;
    double temp = Pserejajeete;
    for(LL i=1;i<=100000;i++){
      ans +=temp;
      temp*= PkoiNahijeete;
    }
    printf("%0.6lf\n",ans);
  }
  return 0;
}