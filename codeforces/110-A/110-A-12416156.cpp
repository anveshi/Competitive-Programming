#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
bool islucky(int n){
  return (n==4 || n==7);
}
int main(){
  LL n,ld=0;
  cin >> n;
  while(n){
    if(islucky(n%10)){
      ld++;
    }
    n/=10;
  }
  if(islucky(ld))
    cout << "YES" << endl;
  else
    cout << "NO" << endl;
  return 0;
}