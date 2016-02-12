#include<bits/stdc++.h>
using namespace std;
#define sz(a) ((a).size()) 
#define pb push_back 
#define lli long long int
#define ull unsigned long long
int main()
{
	int n,i,j;
	cin >> n;
	char str[102];
	int a[n][n];
	for(i=0;i<n;i++)
	{
		scanf("%s",str);
		for(j=0;j<n;j++)
		{
			if(str[j]=='x')
				a[i][j]=1;
			else if(str[j]=='o')
				a[i][j]=0;
		}
	}
	int flag=0;
	int adj=0;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			 adj=0;
			if(i!=0)
			{
				if(a[i-1][j]==0)
					adj+=1;
			}
			if(i!=n-1)
			{
				if(a[i+1][j]==0)
					adj+=1;
			}
			if(j!=0)
			{
				if(a[i][j-1]==0)
					adj+=1;
			}
			if(j!=n-1)
			{
				if(a[i][j+1]==0)
					adj+=1;
			}
			if(adj%2==0)continue;
			else {flag=1;break;}
		}
		if(flag==1)break;
	}
	if(flag==0)
		printf("YES\n");
	else
		printf("NO\n");	
	return 0;
}