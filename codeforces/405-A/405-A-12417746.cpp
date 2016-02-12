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
int a[101];
int main(){
  int n;
  cin >> n;
  for(int i=0;i<n;i++){
    cin >> a[i];
  }
  sort(a,a+n);
  for(int i=0;i<n;i++){
    cout << a[i] << " ";
  }
  cout << endl;
  return 0;
}