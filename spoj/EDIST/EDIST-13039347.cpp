#include<bits/stdc++.h>
#define lol long long int
using namespace std;
int main()
{
	cin.tie(NULL);
	lol t,i,j,n,m;
	char s1[2002],s2[2002];
	cin >> t;
	while(t--)
	{
		scanf("%s %s",s1,s2);
		n=strlen(s1);m=strlen(s2);
		int v1[m+1],v2[m+1];
		for(i=0;i<=m;i++){v1[i]=i;v2[i]=0;}
		for(i=1;i<=n;i++)
		{
			v2[0]=i;
			for(j=1;j<=m;j++)
			{
				if(s1[i-1]==s2[j-1])v2[j]=v1[j-1];
				else v2[j]=v1[j-1]+1;
				v2[j]=min(v2[j],v1[j]+1);
				v2[j]=min(v2[j],v2[j-1]+1);
			}
			for(j=0;j<=m;j++)
				v1[j]=v2[j];

		}
		cout << v1[m] << endl;	
	}
	return 0;
}
