#include <bits/stdc++.h>
using namespace std;
const int Maxn = 200005;
int n,a[Maxn];
double max_subarray(double x){

  double max_ending_here1 = 0.0, max_so_far1 = 0.0;
  for(int i=1;i<=n;i++){
    max_ending_here1 = max(0.0,max_ending_here1+a[i]-x);
    max_so_far1 = max(max_so_far1, max_ending_here1);
  }

  double max_ending_here2 = 0.0, max_so_far2 = 0.0;
  for(int i=1;i<=n;i++){
    max_ending_here2 = max(0.0,max_ending_here2-a[i]+x);
    max_so_far2 = max(max_so_far2, max_ending_here2);
  }

  return  max(max_so_far1,max_so_far2);
}
int main(){
  scanf("%d",&n);
  for(int i=1;i<=n;i++){
    scanf("%d",&a[i]);
  }
  double l = -20000.00;
  double r = 20000.00;
  for(int i=0;i<200;i++){
    double l1 = (2.0*l+r)/3.0;
    double l2 = (l+2*r)/3.0;
    if(max_subarray(l1)<max_subarray(l2))
      r = l2;
    else
      l = l1;
  }
  printf("%0.11lf\n",max_subarray(l));
  return 0;
}