#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const int Maxn = 1005;
int a[Maxn];
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int n;
  cin >> n;
  for(int i=1;i<=n;i++){
    cin >> a[i];
  }
  int e = 0, d=0;
  for(int i=1;i<=n;i++){
    int cnt = 0;
    if(i%2==1){
      for(int j=1;j<=n;j++){
        if(a[j]<=e && a[j]>=0){
            e++;a[j]=-1;cnt++;
        }
      }
    }
    else{
      for(int j=n;j>=1;j--){
        if(a[j]<=e && a[j]>=0)
          e++,a[j]=-1,cnt++;
      }
    }
    if(cnt && i>1)
      d++;
  }
  cout << d << endl;
  return 0;
}