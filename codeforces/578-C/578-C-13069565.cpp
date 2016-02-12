#include <bits/stdc++.h>
using namespace std;
int const Maxn = 2*100000 + 5;
int n,a[Maxn];

double M(double x){
  
  // Kadane's algorithm 

  double cur_max1 = 0.0, global_max1 = 0.0;
  for(int i=0;i<n;i++){
    cur_max1 = max(0.0,cur_max1+a[i]-x);
    global_max1 = max(global_max1, cur_max1);  
  }

  double cur_max2 = 0.0, global_max2 = 0.0;
  for(int i=0;i<n;i++){
    cur_max2 = max(0.0, cur_max2-a[i]+x);
    global_max2 = max(global_max2, cur_max2);
  }

  return max (global_max1, global_max2);
}

int main(){
  cin >> n;
  for(int i=0;i<n;i++){
    cin >> a[i];
  }
  
  // Ternary search 
  
  double l = -20000.00,r = 20000.00;

  for(int i=0;i<200;i++){
    double l1 = (2.0*l+r)/3.0;
    double l2 = (2.0*r+l)/3.0;

    M(l1)<M(l2)?r=l2:l=l1;
  }
  cout.precision(10);
  cout << fixed << M(l) << endl;
  return 0;
}