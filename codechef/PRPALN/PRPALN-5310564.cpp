//anveshi
#include<bits/stdc++.h>
#define lol long long int
#define ulol unsigned long long int
#define mp make_pair
#define pb push_back
#define ff first
#define ss second
using namespace std;
char s[100005];
lol t,n,i,j;
int p(int st,int end)
{
	int k;
	for(j=st,k=0;j<=(st+end)/2;j++,k++)
	{
		if(s[j]==s[end-k])
			continue;
		else return 0;
	}
	return 1;
}
int main()
{
	//ios_base::sync_with_stdio(false);
	int flag=0;
	cin.tie(NULL);
	cin >> t;
	while(t--)
	{
		scanf("%s",s);
		n=strlen(s);
		flag=1;
		for(i=0;i<n/2;i++)
		{
			if(s[i]==s[n-i-1])continue;
			else 
			{
				if(p(i,n-i-2) || p(i+1,n-i-1))
					flag=1;
				else
					flag=0;
				break;
			}
		}
		if(flag)cout << "YES" << endl;
		else cout << "NO" << endl;

	}
	return 0;
}