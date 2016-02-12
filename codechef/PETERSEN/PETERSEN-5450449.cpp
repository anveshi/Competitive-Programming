//anveshi
#include<bits/stdc++.h>
#define lol long long int
#define ulol unsigned long long int
#define mp make_pair
#define pb push_back
#define ff first
#define ss second
char s[100005];
int ans[100005];
int a[10][10];
using namespace std;
int main()
{
	//ios_base::sync_with_stdio(false); 
	cin.tie(NULL);
	int t,i,j,turn,k,n,k1,k2,k3,k4;
	for(i=0;i<10;i++)
	{
		for(j=0;j<10;j++)
			a[i][j]=0;
	}
	for(i=0;i<5;i++)
	{
		a[i][(i+1)%5]=1;
		a[i][(i+4)%5]=1;
		a[i][i+5]=1;
	}
	for(i=5;i<10;i++)
	{
		a[i][i-5]=1;
		a[i][5+(i+2)%5]=1;
		a[i][5+(i+3)%5]=1;		
	}
	cin >> t;

	while(t--)
	{
		turn=-1;
		scanf("%s",s);
		n=strlen(s);
		for(i=0;i<n;i++)
			ans[i]=-1;
		for(i=0;i<n-1;i++)
		{
			if(s[i]!=s[i+1])
			{
				turn=i;
				break;
			}
		}
		if(turn==-1)
		{
			k=s[0]-'A';
			
			for(i=0;i<n;i++)
			{
				if(i%2==0)
				cout << k;
				else cout << k+5 ;
			}
			cout << endl;

		}
		else
		{
			int flag=0;
				i=turn;
				k1=s[i]-'A';
				k2=k1+5;
				k3=s[i+1]-'A';
				k4=k3+5;
				if(a[k1][k3])
				{
					ans[i]=k1;ans[i+1]=k3;
				}
				else if(a[k1][k4])
				{
					ans[i]=k1;ans[i+1]=k4;
				}
				else if(a[k2][k3])
				{
					ans[i]=k2;ans[i+1]=k3;
				}
				else if(a[k2][k4])
				{
					ans[i]=k2;ans[i+1]=k4;
				}
				else
				{
					flag=1;
				}
				if(flag==0){
				for(i=turn+1;i<n-1;i++)
				{
					k=ans[i];
					k1=s[i+1]-'A';
					k2=k1+5;
					if(a[k][k1])
						ans[i+1]=k1;
					else if(a[k][k2])
						ans[i+1]=k2;
					else {
						flag=1;
						break;
					}
				}
				}
				if(flag==0)
				{
					for(i=turn-1;i>=0;i--)
					{
						k=ans[i+1];
						k1=s[i]-'A';
						k2=k1+5;
						if(a[k1][k])ans[i]=k1;
						else if(a[k2][k])ans[i]=k2;
						else{flag=1;break;}
					}
				}
				if(flag==1)
					cout << "-1" << endl;
				else
				{
					for(i=0;i<n;i++)
						cout << ans[i] ;
					cout << endl;
				}

		}

	}
	return 0;
}