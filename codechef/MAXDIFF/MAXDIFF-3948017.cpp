#include<iostream>
#include<cstdio>
#include<cstdlib>
using namespace std;
int absolute(int x)
{
	return(x <0?(-1)*x:x);
}
int compare(const void *a,const void *b)
{
	return (*(int *)a - *(int *)b);
}
int maximum(int x,int y)
{
	return (x >y ?x:y);
}
int main()
{
	int T,n,k,sum,less,ans,more,ans1,ans2;
	cin >> T;
	while(T--)
	{
		sum =0;
		cin  >> n >>k;
		int a[n];
		for(int i=0;i<n;i++)
		{
			cin >> a[i];sum+=a[i];
		}
		qsort(a,n,sizeof(int),compare);
	less=0;more=0;
	for(int i=0;i<k;i++)
	{
		less+=a[i];
		more+=a[n-i-1];
	}
		ans1=absolute(sum - 2*less);
		ans2=absolute(sum- 2*more);
		ans = maximum(ans1,ans2);
	cout << ans <<endl;
	}
	return 0;
}