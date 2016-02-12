#include<bits/stdc++.h>
#define maxwell 2000000000
using namespace std;
long mod(long x)
{
	return (x<0?(-1)*x:x);
}
int main()
{
	long T,n,val,k,count,minv;
	cin >> T;
	while(T--)
	{
		cin >> n >> k;
		int a[n];
		minv = maxwell;
		count = 0;
		for(int i=0;i<n;i++)
			cin >> a[i];
		for(int i=0;i<n;i++)
		{
			for(int j=i+1;j<n;j++)
			{
			
				val = a[i]+a[j]-k;
				val=mod(val);
				if(val<minv)
				{
					minv=val;
					count =0;
				}
				if(val == minv)
				{
					count ++;
				}
				
			}
		}
		printf("%ld %ld\n",minv,count);

	}

	return 0;
}