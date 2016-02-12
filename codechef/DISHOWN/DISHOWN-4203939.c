#include<stdio.h>
int S[10001],parent[10001];
int grandparent(int i)
{
	int grand,temp;
	grand=i;
	while(parent[grand]>=0)grand=parent[grand];
	temp=i;
	while(temp!=grand)
	{
		parent[temp]=grand;
		temp=parent[temp];
	}
	return grand;
}
int main()
{
	int T,n,Q,type,x,y,i,gpx,gpy;
	scanf("%d",&T);
	while(T--)
	{
		scanf("%d",&n);
		for(i=1;i<=n;i++)
		{
			scanf("%d",&S[i]);
			parent[i]=-1;
		}
		scanf("%d",&Q);
		while(Q--)
		{
			scanf("%d",&type);
			if(type==0)
			{
				scanf("%d %d",&x,&y);
				gpx=grandparent(x);
				gpy=grandparent(y);
				if(gpx==gpy){ printf("Invalid query!\n") ;continue;}
				else 
				{
					if(S[gpx]>S[gpy])
					{parent[gpy]=gpx;continue;}
					else if(S[gpx]<S[gpy])
					{parent[gpx]=gpy;continue;}
				}
			}
			else if(type==1)
			{
				scanf("%d",&x);
				printf("%d\n",grandparent(x));
			}
		}
	}
	return 0;
}