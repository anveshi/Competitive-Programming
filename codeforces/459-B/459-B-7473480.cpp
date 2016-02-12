#include<iostream>
#include<cstdlib>
using namespace std;
int com (const void * a, const void * b)
{
	   return ( *(long long int*)a - *(long long int*)b );
}
int main()
{
	long long int n,i,j,z;
	cin >> n;
	long long int v[n];
	for(i=0;i<n;i++)
		cin >> v[i];
	qsort(v,n,sizeof(long long int),com);
	cout << v[n-1]-v[0] << " ";
	long long int a=1;
	long long int b=1;
	for(i=1;i<n;i++)
	{
		if(v[i]==v[0])a++;else break;
	}
	for(j=n-2;j>=0;j--)
	{
		if(v[j]==v[n-1])b++;else break;
	}
	if(v[n-1]==v[0]){z=(n*(n-1))/2;}
	else z=a*b;
	cout << z << endl;
	return 0;
}