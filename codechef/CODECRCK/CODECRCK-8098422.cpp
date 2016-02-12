// Jai Bajrangbali
#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
double Mat[2][2];
double binpow(double base, LL exp){
  double res = 1.0, cur = base;
  while(exp>0){
    if(exp&1LL)
      res*=cur;
    cur *= cur;
    exp >>= 1LL; 
  }
  return res;
}
int main(){
  double x, y, X, Y, num, den;
  x = sqrt(2.0); y = sqrt(6.0);
  X = x + y; Y = x - y;
  LL i, k, s, a_i, b_i, diff;
  scanf("%lld %lld %lld",&i, &k, &s);
  scanf("%lld %lld",&a_i, &b_i);
  Mat[0][0] = X;
  Mat[0][1] = Y;
  Mat[1][0] = Y;
  Mat[1][1] = -X;
  diff = abs(i-k);
  if(diff%2==0){
    Mat[0][0] = 1.0;
    Mat[0][1] = 0.0;
  }
  num = (a_i + b_i)*Mat[0][0] + (a_i - b_i)*Mat[0][1];
  if(k>=i){
    s = s - 4*(diff/2); 
    if(s>=0)
      den = binpow(0.5,s);
    else den = binpow(2.0,-s);
  }
  else{
    s = s + 4*((diff+1)/2); 
    if(s>=0)
      den = binpow(0.5,s);
    else den = binpow(2.0,-s);  
  }
  num *= den;
  printf("%0.6lf\n",num);
  return 0;
}