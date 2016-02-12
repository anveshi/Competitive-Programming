#include<iostream>
using namespace std;
int main()
{
	int n,m,i,j,t;
	int a[105][105];
	int ans[105][105];
	cin  >>  t;
	while(t--)
	{
		cin  >> n  >> m;
		for(i=0;i<n;i++)for(j=0;j<m;j++)cin  >>  a[i][j];
	
	for(i=0;i<m;i++)ans[n-1][i]=a[n-1][i];

	for(i=n-2;i>=0;i--)
	{
		for(j=0;j<m;j++)
		{
			ans[i][j]=ans[i+1][j];
			if(j>0 &&ans[i+1][j-1] > ans[i+1][j])
				ans[i][j]=ans[i+1][j-1];
			if(j<m-1 && ans[i+1][j+1]>ans[i][j])
				ans[i][j]=ans[i+1][j+1];
			ans[i][j]+=a[i][j];
		}
	}
	int my=ans[0][0];
	for(i=0;i<m;i++)my=max(my,ans[0][i]);
	cout << my << endl;
	}
	return 0;
}
