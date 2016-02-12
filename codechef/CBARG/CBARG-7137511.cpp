#include <bits/stdc++.h>
using namespace std;
int main(){
  long long t,n,x,ans,prev;
  scanf("%lld",&t);
  while(t--){
    scanf("%lld",&n);
    prev = 0;
    ans = 0;
    while(n--){
      scanf("%lld",&x);
      x>prev?ans+=(x-prev):0;
      prev = x;
    }
    printf("%lld\n",ans);
  }
	return 0;
}