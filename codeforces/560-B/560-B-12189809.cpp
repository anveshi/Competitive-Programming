#include <bits/stdc++.h>
using namespace std;
int main(){
  int a[2],b[2],c[2];
  cin >> a[0] >> a[1] >> b[0] >> b[1] >> c[0] >> c[1] ;
  for(int i=0;i<2;i++){
    for(int j=0;j<2;j++){
      for(int k=0;k<2;k++){
        if(b[j]+c[k]<=a[i] && a[1^i]>=max(b[1^j],c[1^k])){
          cout << "YES" << endl;
          return 0;
        }
      }
    }
  }
  cout <<  "NO" << endl;
  return 0;
}