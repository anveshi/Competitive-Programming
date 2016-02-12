#include<bits/stdc++.h>
using namespace std;
char s[105];
int a[105][105];
int main()
{
	//stack <int> mystack;
	int n,m,i,j;
	cin >> n >> m;
	for(i=0;i<n;i++)
	{
		scanf("%s",s);
		for(j=0;j<m;j++)
		{
			if(s[j]=='.')
				a[i][j]=1;
			else a[i][j]=2;
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			if( (i+j)%2==0 && a[i][j]==1)
			{
				a[i][j]=3;
			}
			else if(a[i][j]==1 && (i+j)%2==1)
			{
				a[i][j]=4;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			if(a[i][j]==2) cout << '-';
			else if(a[i][j]==3)cout << 'B';
			else if(a[i][j]==4)cout << 'W';
		}
		cout << endl;
	}

	return 0;
}