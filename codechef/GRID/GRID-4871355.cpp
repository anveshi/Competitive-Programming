#include<bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define ll long long  int 
#define ul unsigned long long  int 
#define mod 1000000007
#define all(c) (c).begin(),(c).end() 
#define tr(c,i) for(typeof((c).begin() i = (c).begin(); i != (c).end(); i++) 
#define present(c,x) ((c).find(x) != (c).end()) 
#define cpresent(c,x) (find(all(c),x) != (c).end()) 
using namespace std;
int a[1001][1001];
char s[1001];
int dp1[1001][1001];
int dp2[1001][1001];
int main()
{
	//ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t,n,i,j,count,ans;
	cin >> t;
	while(t--)
	{
		cin >> n;
		for(i=0;i<n;i++)
		{
			scanf("%s",s);
			for(j=0;j<n;j++)
			{
				if(s[j]=='#')a[i][j]=1;
				else if (s[j]=='.')a[i][j]=0;
				else assert(1==5);
			}
		}
		for(i=0;i<n;i++)
		{
			count=0;
			for(j=n-1;j>=0;j--)
			{
				if(a[i][j]==1)count=1;
				dp1[i][j]=count;
			}
		}
		for(j=0;j<n;j++)
		{
			count=0;
			for(i=n-1;i>=0;i--)
			{
				if(a[i][j]==1)count=1;
				dp2[i][j]=count;

			}
		}
/*		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				cout << dp1[i][j] << " ";
			}
			cout << endl;
		}
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				cout << dp2[i][j] << " ";
			}
			cout << endl;
		}*/
		ans=0;
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				if(dp1[i][j] ==0 && dp2[i][j]==0)
					ans++;
			}
		}
		cout << ans << endl;
	}	
	return 0;
}