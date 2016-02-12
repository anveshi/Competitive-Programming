#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
double R[5];
double Rminus1, Rminus2,Rminus0;
map <LL,LL> MM;
int main(){
  LL T, P, M, B, x, y,MMM=0;
  MM.clear();
  scanf("%lld",&T);
  scanf("%lld %lld %lld %lld",&x,&P,&M,&B);
  scanf("%lf %lf %lf %lf",&R[1],&R[2],&R[3],&R[4]);
  for(LL i=1;i<=T;i++){
    y =(P*x)%M+B;
    MM[y]++;
    if(y>MMM)MMM=y;
    x = y;
  }
  double z;
  z = -2.0/(double)R[1] + 2.0/(double)R[2];
  Rminus1 = R[4];
  Rminus2 = R[3];
  double ans =0.000000;
  for(LL i=5;i<=MMM;i++){
    double  temp= 2.0/(double)Rminus1 - 1.0/(double)Rminus2 + z;
    Rminus0  = 1.0000/(double)temp;
    if(Rminus0<0.0000001){break;}
    ans += MM[i]*Rminus0;
    Rminus2 = Rminus1;
    Rminus1 = Rminus0;
  }
  for(LL i=1;i<5;i++){
    ans +=MM[i]*R[i];
  }
  cout.precision(6);
  cout << fixed << ans  << endl;
  return 0;
}