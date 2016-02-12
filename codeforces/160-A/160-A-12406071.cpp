#include <bits/stdc++.h>
typedef long long LL;
using namespace std;
int main(){
  LL n,a[105],sum=0,temp=0;
  cin >> n;
  for(int i=0;i<n;i++){
    cin >> a[i];
    sum+=a[i];
  }
  sort(a,a+n);
  for(int i=n-1;i>=0;i--){
    temp+=a[i];
    if(2*temp>sum){
      cout << n-i << endl;
      return 0;
    }
  }
  return 0;
}