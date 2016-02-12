#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,k,l,r,sk,sall,i,j,rem,q;
	cin >>n >> k>> l >> r >> sall >> sk ;
	int a[n];
	rem=sk%k;
	q=sk/k;
	for(i=0;i<k;i++){
		a[i]=q;
		if(rem>0)a[i]+=1;
		rem-=1;
	}
	if(n!=k)
	{
		q=(sall-sk)/(n-k);
		rem=(sall-sk)%(n-k);
		for(i=k;i<n;i++)
		{
			a[i]=q;
			if(rem>0)a[i]+=1;
			rem-=1;
		}
	}
	for(i=0;i<n;i++)
	{
		assert(a[i]>=l && a[i]<=r);
			cout << a[i] << " ";
	}
	return 0;
}