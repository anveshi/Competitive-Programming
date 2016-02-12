//anveshi
#include<bits/stdc++.h>
#define lol long long int
#define fl  double
const double zero=0.000000000000;
using namespace std;
fl I[26][26];
fl a[26][26],ans[26][26],M[26][26],dp[30][26][26],sum;
lol i,j,k,x;
void power()
{
	fl sum;
	for(i=0;i<30;i++)
	{
		if(i==0)
		{
			for(j=0;j<26;j++)
			{
				for(k=0;k<26;k++)
					dp[i][j][k]=a[j][k];
			}
		}
		else
		{
			for(j=0;j<26;j++)
			{
				for(k=0;k<26;k++)
				{
				    sum=0.0000000;
				    for(int t=0;t<26;t++)
				    {
					sum+=dp[i-1][j][t]*dp[i-1][t][k];
			            }
				    dp[i][j][k]=sum;
				}
			}
		}
	}
	return ;
}
int main()
{
	cin.tie(NULL);
	set <string> v;
	v.clear();
	lol t,n,l,K,m,MAX,o=1;
	for(i=0;i<26;i++)for(j=0;j<26;j++){if(i==j)I[i][j]=1.0;else I[i][j]=0.0;}
	char s[5];
	fl temp,c=0.0;
	
	char str[5];
	scanf("%lld",&t);
	while(t--)
	{
		v.clear();
		scanf("%lld %lld",&n,&K);
		scanf("%s",s);
		l=strlen(s);
		for(i=0;i<26;i++)
		{
			for(j=0;j<26;j++)
			{
				scanf("%lf",&a[i][j]);
				ans[i][j]=I[i][j];
				M[i][j]=I[i][j];
			}
		}
	power();
	for(x=0;x<30;x++)
	{
		if( K & (o<< x))
		{
			for(i=0;i<26;i++)
			{
				for(j=0;j<26;j++)
				{
					sum = 0.0 ;
					for(k=0;k<26;k++)
					{
						sum+=(ans[i][k]*dp[x][k][j]);
					}
					M[i][j]=sum;
				}
			}
			for(i=0;i<26;i++)for(j=0;j<26;j++)ans[i][j]=M[i][j];
		}

	}
		fl res=zero;
		for(i=0;i<n;i++)
		{
			scanf("%s",str);
			if(strlen(str)==l)
			v.insert(str);
		}
		for(set <string>::iterator it=v.begin();it!=v.end();it++)
		{
		//	cout << *it << endl;
			{
				temp=1.000000;
				for(j=0;j<l;j++)
				{
					temp=temp*ans[s[j]-'a'][(*it)[j]-'a'];
				}
				res+=temp;
			}
		}
		
		printf("%0.15lf\n",res);
	}
	return 0;
}