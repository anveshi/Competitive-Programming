#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
LL N[10005];
double R[200005];
int main(){
  LL T, P, M, B;
  scanf("%lld",&T);
  scanf("%lld %lld %lld %lld",&N[0],&P,&M,&B);
  scanf("%lf %lf %lf %lf",&R[1],&R[2],&R[3],&R[4]);
  for(LL i=1;i<=T;i++){
    N[i] =(P*(N[i-1]))%M+B;
  }
  double z1,z2,k1,k2,a,b,c,r1,r2;
  z1 = -1.0/(double)R[1] + 1.0/(double)R[2];
  z2 = 1.0/(double)(R[1]*R[1])+1.0/(double)(R[2]*R[2]);
  for(LL i=5;i<=3*1000;i++){
    k1 =z1+1.0/(double)R[i-1];
    k2 =z2+1.0/(double)(R[i-1]*R[i-1]);
    a = 2.0*k2 -k1*k1;
    b = -2.0*k1;
    c = 1.0;
    double s = sqrt(b*b-4*a*c);
    r1 = (-1.0*b+s)/(2.0*a);
    r2 = (-1.0*b-s)/(2.0*a);
    double c1,c2;
    c1 = fabs(r1-R[i-2]);
    c2 = fabs(r2-R[i-2]);
    if(c1>c2){
      R[i]=r1;
    }
    else 
      R[i]=r2;
  }
  double ans =0.000000;
  for(LL i=1;i<=T;i++){ 
    ans +=R[N[i]];
  }
  cout.precision(6);
  cout << fixed ;
  cout << ans  << endl;
  return 0;
}