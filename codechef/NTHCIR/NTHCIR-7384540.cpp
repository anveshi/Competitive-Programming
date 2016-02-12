#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const LL Maxn = 100000000;
LL N[10005];
double R[5];
double Rminus1, Rminus2,Rminus0;
map <LL,LL> MM;
int main(){
  LL T, P, M, B, x, y,MMM=0;
  MM.clear();
  //cout.precision(6);
  scanf("%lld",&T);
  scanf("%lld %lld %lld %lld",&x,&P,&M,&B);
  scanf("%lf %lf %lf %lf",&R[1],&R[2],&R[3],&R[4]);
  for(LL i=1;i<=T;i++){
    y =(P*x)%M+B;
    MM[y]++;
    if(y>MMM)MMM=y;
    x = y;
  }
  double z1,z2,k1,k2,a,b,c,r1,r2,t1,t2;
  t1 = -1.0/(double)R[1];
  t2 =  1.0/(double)R[2];
  z1 = t1+t2;
  z1 = -1.0/(double)R[1] + 1.0/(double)R[2];
  z2 = t1*t1 + t2*t2;
  Rminus1 = R[4];
  Rminus2 = R[3];
  double ans =0.000000;
  for(LL i=5;i<=MMM;i++){
    k1 =z1+1.0/(double)Rminus1;
    k2 =z2+(1.0/(double)(Rminus1))*(1.0/(double)Rminus1);
    a = 2.0*k2 -k1*k1;
    b = -2.0*k1;
    c = 1.0;
    double s = sqrt(b*b-4*a*c);
    r1 = (-1.0*b+s)/(2.0*a);
    r2 = (-1.0*b-s)/(2.0*a);
    double c1,c2;
    c1 = fabs(r1-Rminus2);
    c2 = fabs(r2-Rminus2);
    if(c1>c2){
      Rminus0=r1;
    }
    else 
      Rminus0=r2;
    if(Rminus0<0.00000001){break;}
    ans += MM[i]*Rminus0;
    Rminus2 = Rminus1;
    Rminus1 = Rminus0;
  }
  for(LL i=1;i<5;i++){
    ans +=MM[i]*R[i];
  }
  cout.precision(6);
  cout << fixed ;
  cout << ans  << endl;
  return 0;
}