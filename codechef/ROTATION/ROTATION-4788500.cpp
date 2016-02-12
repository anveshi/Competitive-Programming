#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m,v,index,i;char c[3];
	scanf("%d %d",&n,&m);
	int a[n];
	for(i=0;i<n;i++)scanf("%d",&a[i]);
	index=0;
	while(m--)
	{
		scanf("%s",c);
		scanf("%d",&v);
		if(c[0]=='C')
		{
			index=index+v;
			index=(index+n)%n;
		}
		else if(c[0]=='A')
		{
			index-=v;
			index=(index+n)%n;
		}
		else if(c[0]=='R')
		{
			index%=n;
			index=(index+n)%n;
			printf("%d\n",a[(v+index-1)%n]);
		}
	}
	return 0;
}