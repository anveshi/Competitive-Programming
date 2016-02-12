#include<bits/stdc++.h>
#define MOD 1000000007
char str[100005];
using namespace std;
int main()
{
	int T,i,n,odd;
	unsigned long long int ans;
	scanf("%d",&T);
	while(T--)
	{
		scanf("%s",str);
		n=strlen(str);
		ans=1;
		odd=1;
		for(i=0;i<n;i++)
		{
			if(odd==1)
			{
				if(str[i]=='l'){ans*=2;}
				else{ ans=ans*2+2;}
				odd=0;
			}
			else
			{
				if(str[i]=='l')
					ans=ans*2-1;
				else ans=ans*2+1;
				odd=1;
			}
			ans%=MOD;
		}
		cout << ans%MOD << endl;
	}
	return 0;
}