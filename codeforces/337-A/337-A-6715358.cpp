#include<bits/stdc++.h>
using namespace std;
#define limit 100000000
inline int compare( const void *a,const void *b)
{
	return ( *(int *)a - *(int *)b);
}
int main()
{
	int n,m,x,mini;
	mini = limit;
	scanf("%d %d",&n,&m);
	int a[m];
	for(int i=0;i<m;i++)
		cin >> a[i];
	qsort(a,m,sizeof(int),compare);
//	for(int i=0;i<m;i++)
	//cout << a[i] << " ";
//	return 0;
	for(int i=0;i<m-n+1;i++)
	{
		x = a[i+n-1]-a[i];
	//	cout  << "x = " <<  x << " " << endl;
		if(x < mini)
			mini =x;
	}
	printf("%d\n",mini);
	return 0;
}