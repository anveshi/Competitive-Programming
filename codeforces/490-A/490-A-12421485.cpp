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
vector <int> v[3];
int main(){
  int n,cnt[3]={0},x;
  cin >> n;
  for(int i=0;i<n;i++){
    cin >> x;
    cnt[--x]++;
    v[x].push_back(i+1);
  }
  int z;
  cout << (z=min(cnt[1],min(cnt[0],cnt[2]))) << endl;
  for(int i=0;i<z;i++){
    cout << v[0][i] << " " << v[1][i] << " " << v[2][i]<< endl;
  }
  return 0;
}