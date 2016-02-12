#include<bits/stdc++.h>
using namespace std;
int a[101][101];
/*int compare (const void *a,const void *b)
{
	return (*(int *)a - *(int *)b);
}*/
int main()
{
	int T,n,m,i,j,temp,maxwell,sum;
	cin >> T;
	while(T--)
	{
		cin >> n >> m; //n rooms ,m visits;
		int P[m];
		for(i=0;i<m;i++)
			cin >> P[i];
		for(i=0;i<n;i++)
		{
			cin >> a[i][0];
			for(j=1;j<=a[i][0];j++)
					cin >> a[i][j];
		}
		sum =0 ;
		for(i=0;i<m;i++)
		{

			maxwell=a[P[i]][1];temp=1;
			for(j=1;j<=a[P[i]][0];j++)
			{
				if(maxwell < a[P[i]][j])
				{
					maxwell = a[P[i]][j];
					temp=j;
				}
			}
			a[P[i]][temp]=0;
			sum+=maxwell;
		}
		printf("%d\n",sum);
	}
	return 0;
}