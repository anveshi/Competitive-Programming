#include<bits/stdc++.h>
#define inf -1
using namespace std;
int main()
{
	int t,n,m,c,i,j;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d %d",&n,&m);
		int N;
		N=n;
		int c[m+1];
		for(i=1;i<=m;i++)
			scanf("%d",&c[i]);
		int after[401][m+1];
		for(i=0;i<401;i++)after[i][m]=inf;
		for(i=m-1;i>0;i--)
		{
			for(j=0;j<401;j++)
			{
				after[j][i]=after[j][i+1];
				after[c[i+1]][i]=i+1;
			}
		}
		int ans=0;
		int sitted[401]={0};
		vector <int> order;
		for(i=1;i<=m;i++)
		{
			if(sitted[c[i]])continue;
			else if(n){order.push_back(c[i]);sitted[c[i]]=1;n--;ans++;}
			else if(n==0 && sitted[c[i]]==0)
			{
				int minu=0;
				for(j=0;j<N;j++)
				{
					if(after[order[j]][i]==-1){minu=j;break;}
					if(after[order[j]][i] >= after[order[minu]][i])
						minu=j;
				}
				sitted[order[minu]]=0;
				order[minu]=c[i];
				sitted[c[i]]=1;
				ans++;
			}
		}
		printf("%d\n",ans);
	}
	return 0;
}