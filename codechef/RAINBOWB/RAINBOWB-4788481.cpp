#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define lli long long int
long long int ans;
lli fun(lli a)
{
	lli val1,val2,val;
	val1=((a-1)*(a-2)*(a-3))/6;
	val2=((a-4)*(a-5))/2;
	if(val1%5==0)val1/=5;
	else val2/=5;
	if(val1%2==0)val1/=2;
	else val2/=2;
	val1%=mod;
	val2%=mod;
	val=(val1*val2)%mod;
	return val;
}
int main()
{
	int n,i;
	scanf("%d",&n);
	if(n%2==0)i=2;
	else i=1;
	ans=0;
	for(i;i<=n-12;i+=2)
	{
		ans+=fun((n-i)/2);
		if(ans>=mod)ans%=mod;
	}
	cout << ans << endl;
	return 0;
}