#include <bits/stdc++.h>
using namespace std;
const double EPS = 0.0000000001;
int n;
double a[234567];
bool check(double x){
  if(x<=a[0] && 2*x<=a[n])
    return 1;
  return 0;
}
double binary_S(double st,double end){
  if(end-st<EPS)
    return end;
  else{
    double mid = (st+end)/2.0;
    if(check(mid))
      return binary_S(mid,end);
    else
      return binary_S(st,mid);
  }
}
int main(){
  double w,ans1,ans2;
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cin >> n >> w;
  for(int i=0;i<2*n;i++)
    cin >> a[i];
  sort(a,a+2*n);
  cout.precision(17);
  ans1 = 3*n*binary_S(0.0,min(a[0],w/(double)(3*n)));
  ans2 = 0.0;
  if(a[n]>=a[0]*2 && 3*n*a[0]<=w)
    ans2 = max(ans2,3.0*n*a[0]);
  if(2*a[0]>=a[n] && a[n]*3*n<=2*w) 
    ans2 = max(ans2,3.0*n*a[n]/2.0);
  if(w<=a[0]*n*3 && 2*w <=a[n]*3*n) 
    ans2 = max(ans2,w);
 // assert(fabs(ans2-ans1)<0.000001);
  cout << fixed << ans1 << endl;
  return 0;
}