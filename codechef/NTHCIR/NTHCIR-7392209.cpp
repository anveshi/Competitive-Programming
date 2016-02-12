#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
double R[5];
double F[3];
double solve(LL n){
  double temp=(n*(n+1))/2.00;
  double zz =  (n+1)*F[0] - n*F[1] + temp*F[2];
  return 1.0/(double)zz;
}
int main(){
  LL T, P, M, B, x, y;
  scanf("%lld",&T);
  scanf("%lld %lld %lld %lld",&x,&P,&M,&B);
  scanf("%lf %lf %lf %lf",&R[1],&R[2],&R[3],&R[4]);
  double z,ans=0.0000000;
  z = -2.0/(double)R[1] + 2.0/(double)R[2];
  F[0] =1.0/(double)R[4];
  F[1] = 1.0/(double)R[3];
  F[2] = (double)z;
  while(T--){
    y =(P*x)%M+B;
    if(y<=4)
      ans += R[y];
    else{
      ans += solve(y-4);
    }
    x = y;
  }
  printf("%0.6lf\n",ans);
  return 0;
}