#include<bits/stdc++.h>
///#define lol long long int
#define lol unsigned long long int
#define mp make_pair
#define pb push_back
#define ff first
#define ss second
using namespace std;
char s[5432];
lol fun(int i)
{
	int n;
	n=strlen(s);
	int z=(s[i]-'0')*10+s[i+1]-'0';
	if(i>=n)return 0;
	else if(i==n-1)return 1;
	else if(i==n-2 && z <=26)return 2;
	else if(z>26)
		return fun(i+1)+fun(i+2);
	else return fun(i+1);
}
int main()
{
	//ios_base::sync_with_stdio(false); 
	cin.tie(NULL);
	int dp[5005];
	scanf("%s",s);
	while(strcmp(s,"0"))
	{
		int n,z,i;
		n=strlen(s);
		for(i=0;i<n;i++)dp[i]=0;
		dp[0]=1;
		for(i=1;i<n;i++)
		{
			z=(s[i-1]-'0')*10+(s[i]-'0');
			if(s[i]-'0')
				dp[i]=dp[i-1];
			if(z<=26 && z>9)
				dp[i]+=dp[(i-2)>0?(i-2):0];

		}
		cout << dp[n-1] << endl;
		scanf("%s",s);
	}
	return 0;
}
