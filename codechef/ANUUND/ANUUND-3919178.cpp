#include<iostream>
#include<cstdio>
#include<cstdlib>
using namespace std;
int compare(const void *a,const void *b)
{
	return (*(int *)a - *(int *)b);
}
int main()
{
	int T,n;
	cin >> T;
	while(T--)
	{
		cin >> n;
		int a[n];
		for(int i=0;i<n;i++)
			cin >> a[i];
		qsort(a,n,sizeof(int),compare);
		//for(int i=0;i<n;i++)
			//cout << a[i] << "\t";
		int i=0,j=n/2;
		if(n%2==0)
		{	
			for(i=0;i<n/2;i++)
			{
				cout << a[i] <<" ";
				cout << a[j];
				j++;
				if(j!=n)
					cout << " ";
			}
			cout << endl;
		}
		else if(n==1)
			cout << a[0]<<endl;
		else
		{
			for(i=0;i<=n/2;i++)
			{
				if(i !=n/2)
					cout << a[i] << " ";
				if(j!=n-1 && j !=n-2)
					cout << a[j];
				else if(j==n-2)
					cout << a[n-1];
				else if(j==n-1)
					cout << a[n-2];
				j++;
				if(j!=n)
					cout << " ";
			}
			cout << endl;
		}
	}
	return 0;
}