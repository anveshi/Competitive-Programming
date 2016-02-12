#include<bits/stdc++.h>
using namespace std;
inline int compare(const void *a,const void *b)
{
	return (*(int *)a - *(int *)b);
}
int main()
{
	int t,n,i;
	cin >> t;
	while(t--)
	{
		cin >> n;
		int a[n];
		for(i=0;i<n;i++)
			cin >> a[i];
		qsort(a,n,sizeof(int),compare);
		cout << a[0]+a[1] << endl;
	}

	return 0;
}