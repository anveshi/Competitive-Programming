#include<bits/stdc++.h>
#define limit 2000000000
using namespace std;
int compare(const void *a , const void *b)
{
	return ( *(int *)a - *(int *)b);
}

int main()
{
	int T,n,mini;
	cin >> T;
	while(T--)
	{
		cin >> n;
		int a[n];
		for(int i=0;i<n;i++)
			cin >>  a[i];
		qsort(a,n,sizeof(int),compare);
		mini =limit;
		for(int i=1;i<n;i++)
		{
			if(mini > a[i]-a[i-1])
				mini = a[i]-a[i-1];
		}
		cout << mini <<endl;
	}
	return 0;
}