#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
LL N,M,T;
long double P[15][10005];
long double CumP[15];
long double Pkoijeete,Pserejajeete;
long double factor = 1e4000L;
int main(){    
  scanf("%lld",&T);
  while(T--){
    

 //   std::cout << "Minimum value for int: " << std::numeric_limits<long double>::min() << '\n';
 //   std::cout << "Maximum value for int: " << std::numeric_limits<long double>::max() << '\n';


    scanf("%lld %lld",&N,&M);
    for(LL i=0;i<=20;i++)
      CumP[i] = 1.000000;
    for(LL i=1;i<=N;i++){
      for(LL j=1;j<=M;j++){
        scanf("%Lf",&P[i][j]);
        CumP[i] = CumP[i]*P[i][j]*100;
      }
    }
    Pserejajeete = CumP[1];
    //cout << Pserejajeete << endl;
    Pkoijeete = 0.000000;
    for(int i=1;i<=N;i++){
      Pkoijeete+=CumP[i];
    }
    long double ans;
    if(Pkoijeete==0)
      ans = 0;
    else 
      ans = (long double)Pserejajeete/(long double)Pkoijeete;
    cout.precision(6);
    cout << fixed << ans << endl;
  }
  return 0;
}