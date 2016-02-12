#include <bits/stdc++.h>
using namespace std;
int main(){
  int x,k,z,t1,t2;
  cin >> x >> k;
  int  min1 = 0,max1 = 0;
  vector <int> v;
  for(int i=0;i<k;i++){
    cin >> z;
    if(z==1){
      cin >> t1 >> t2;
      v.push_back(t1);
      v.push_back(t2);
    }
    else{
      cin >> t1;
      v.push_back(t1);
    }
  }
  v.push_back(0);v.push_back(x);
  sort(v.begin(), v.end());
  int Sz = v.size();
  for(int i=0;i<Sz-1;i++){
    int diff = v[i+1] - v[i] - 1;
    min1 += (diff+1)/2;
    max1 += diff;
  }
  cout << min1 <<  " " << max1 << endl;
  return 0;
}