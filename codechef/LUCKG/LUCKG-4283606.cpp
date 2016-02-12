#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T,n,m,i,j,k,temp,s;
	scanf("%d",&T);
	while(T--)
	{
		scanf("%d %d",&n,&m);
		int ans[n][m];
		int p[n];
		int visited[n];
		int flag;
		int high=0,square;
		for(i=0;i<n;i++)
		{scanf("%d",&p[i]); visited[i]=0;}
		flag=1;
		if(m==2 || m==1)
		{printf("No Solution\n");flag=0;continue;}
		for(i=0;i<n;i++)
		{
			if(visited[i]==0 && flag==1)
			{
				temp=i;
				vector <int>v;
				assert(v.size()==0);
				v.push_back(temp);
				visited[temp]=1;
				while(visited[p[temp]]==0)
				{
					v.push_back(p[temp]);
					visited[p[temp]]=1;
					temp=p[temp];
				}
				s=v.size();
				if(s==1 || s==2 ){flag=0;}
				else if(s==3 && m==4)
				{
					ans[v[0]][0]=high+1;
					ans[v[0]][1]=high+3;
					ans[v[0]][2]=high+10;
					ans[v[0]][3]=high+11;
					ans[v[1]][0]=high+2;
					ans[v[1]][1]=high+7;
					ans[v[1]][2]=high+8;
					ans[v[1]][3]=high+9;
					ans[v[2]][0]=high+4;
					ans[v[2]][1]=high+5;
					ans[v[2]][2]=high+6;
					ans[v[2]][3]=high+12;
					high=high+12;
				}
				else{
				for(j=0;j<m;j++)
				{
					for(k=0;k<s;k++)
						ans[v[(j+k)%s]][j]=high+s-k;
					high+=s;
				}}
			}
		}
		if(flag==0)
			printf("No Solution\n");
		else
		{
		for(i=0;i<n;i++)
		{
			for(j=0;j<m-1;j++)
				printf("%d ",ans[i][j]);
			printf("%d\n",ans[i][m-1]);
		}
		}
	}
	return 0;
}