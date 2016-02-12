#include <bits/stdc++.h>
using namespace std;

int main(){
  long long a,b,c,d,i,temp,a1,a2,nr,dr=0;
  double ans;
  int z[] ={-1,1};
  cin >> a >> b >> c >> d;
  nr = fabs(a*d - b*c);
  for(int k1=0;k1<2;k1++)
    for(int k2=0;k2<2;k2++)
      for(int k3=0;k3<2;k3++)
        for(int k4=0;k4<2;k4++)
          if(z[k1]*z[k4]==z[k2]*z[k3]){
            temp = fabs(z[k1]*a+z[k2]*b+z[k3]*c+z[k4]*d);
            dr = max(dr,temp);
          }
  // dr = z1*a + z2+b +z3*c +z4*d ,zi=+1/-1 && z1*z4 = z2*z3 // only 8 possible values for dr;
  ans = 0;
  if(dr!=0)
    ans  = nr/(double)dr;
  cout << fixed << setprecision(17) <<  ans << "\n";
  return 0;
}