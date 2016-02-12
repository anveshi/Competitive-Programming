#include <bits/stdc++.h>
using namespace std;
int main(){
	long long T,N,K,x,ans;
	scanf("%lld",&T);
	while(T--){
		ans = 0;
		scanf("%lld %lld",&N,&K);
		for(int i=0;i<N;i++){
			scanf("%lld",&x);
			ans +=x;
			if((ans%K)!=0)
				ans++;
		}
    if(ans%K==0)
      ans/=K;
    else
      ans = ans/K+1;
		printf("%lld\n",ans);
	}
}