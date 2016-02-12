#include <bits/stdc++.h>
#define LL long long int
using namespace std;
LL prime[10000001],sp[10000001],ans[10000001];
void seive(){
	for(LL i=2;i*i<10000001;i++){
		if(prime[i]==0){
			sp[i]=i;
			for(LL j=i*i;j<10000001;j+=i){
				if(prime[j]==0)sp[j]=i;
				prime[j]=1;
			}
		}
	}
	for(int j=sqrt(10000000);j<10000001;j++)if(prime[j]==0)sp[j]=j;
	for(int i=2;i<10000001;i++)ans[i]=ans[i-1]+sp[i];
	return ;
}
int main(){
	LL t,n;
	seive();
	scanf("%lld",&t);
	while(t--){
		scanf("%lld",&n);
		printf("%lld\n",ans[n]);
	}
	return 0;
}


