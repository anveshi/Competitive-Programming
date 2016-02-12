/*
He worked by day
And toiled by night.
He gave up play
And some delight.
Dry books he read,
New things to learn.
And forged ahead,
Success to earn.
He plodded on with
Faith and pluck;
And when he won,
Men called it luck.
*/
#include <bits/stdc++.h>
using namespace std;
int a[2005];
int main(){
  int n,k,ans;
  cin >> n >> k;
  k=5-k;
  for(int i=0;i<n;i++){
    cin >> a[i];
  }
  a[n]=100;
  sort(a,a+n+1);
  for(int i=0;i<n+1;i++){
    if(a[i]>k){
      ans=i;
      break;
    }
  }
  cout << ans/3 << endl;
  return 0;
}