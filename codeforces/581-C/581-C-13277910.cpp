#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const int Maxn = 100005;
int a[Maxn];
bool cmp(int i,int j){ return ((i%10)>(j%10)); }

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int n,k;
  cin >> n >> k;
  for(int i=0;i<n;i++){
    cin >> a[i];
  }
  sort(a,a+n,cmp);
  for(int i=0;i<n;i++){
    int tmp = a[i]%10;
    int val = 10-tmp;
    if(val<=k && a[i]+val<=100){
      a[i]+=val;
      k-=val;
    }
    else
      break;
  }
  for(int i=0;i<n;i++){
    int x;
    if(k<10)break;
    x = min(k/10,(100-a[i])/10);
    a[i] +=(x*10);
    k-=(x*10);
  }
  int ans =0;
  for(int i=0;i<n;i++){
    ans += (a[i]/10);
  }
  cout << ans << endl;
  return 0;
}