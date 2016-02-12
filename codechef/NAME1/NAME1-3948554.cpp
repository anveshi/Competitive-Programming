#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main()
{
	int t,n,l2,l1,flag,i,j,l;
	cin >> t;
	while(t--)
	{
		char child[200000];
		flag=0;
		int par[26]={0};
		int chi[26]={0};
		char p1[200000],p2[200000];
		cin >> p1 >> p2;
		l1=strlen(p1);
		l2=strlen(p2);
		for(i=0;i<l1;i++)
			par[p1[i]-'a']++;
		for(i=0;i<l2;i++)
			par[p2[i]-'a']++;
		cin >> n;
		for(int i=0;i<n;i++)
		{
			scanf("%s",child);
			l=strlen(child);
			if(flag==0)
			{
			for(j=0;j<l;j++)
			{
				chi[child[j]-'a']++;
				if(par[child[j]-'a'] < chi[child[j]-'a'])
					flag=1;
			}
			}
		}
		if(flag==0)
			cout << "YES" <<endl;
		else 
			cout << "NO" << endl;
	}
	return 0;
}