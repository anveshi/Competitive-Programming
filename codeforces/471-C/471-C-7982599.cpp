#include<bits/stdc++.h>
using namespace std;
long long H[1000005];
int main()
{
	long long i,n,k,ans;
	cin >> n;
	k=sqrt(n);
	H[1]=2;
	for(i=2;i<=k;i++)
	{
		H[i]=H[i-1]+3*i-1;
	}
	ans=0;
	for(i=1;i<=k;i++)
	{
		if(n-H[i]<0)break;
		if((n-H[i])%3==0)ans++;
	}
	cout << ans << endl;
}