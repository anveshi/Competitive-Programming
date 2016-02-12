#include<bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define langoor long long int 
using namespace std;
int main()
{
	langoor i,j,n,sum,value,count;
	cin >> n;
	langoor a[n],pre[n],suf[n];
	sum=0;
	for(i=0;i<n;i++)
	{
		cin >> a[i];
		sum+=a[i];
		if(i==0)
			pre[i]=a[i];
		else
		pre[i]=pre[i-1]+a[i];
	}
	if(sum%3==0 || n < 3)
	{
		langoor flag[i],scum[i];
		value=sum/3;
		for(i=0;i<n;i++)
		{
			flag[i]=0;
			scum[i]=0;
			if(i==0)
				suf[i]=sum;
			else 
				suf[i]=sum-pre[i-1];
			if(value==pre[i])
				flag[i]=1;
		}
		for(i=n-1;i>=0;i--)
		{
			if(i<n-1)
				scum[i]=scum[i+1];
			if(i==n-1)
			{
				if(value==suf[i])
					scum[i]=1;
			}
			else if(value==suf[i])
				scum[i]=scum[i+1]+1;
		}
//		for(i=0;i<n;i++)
//		{
//			cout << pre[i] << " "<< suf[i] << " "<< flag[i] << " "<< scum[i] << endl;
//		}
		count=0;
		for(i=0;i<=n-3;i++)
		{
			if(flag[i]==1)
				count+=scum[i+2];
		}
		cout << count << endl;

	}
	else
	{
		cout << "0" << endl;
	}
	return 0;
}