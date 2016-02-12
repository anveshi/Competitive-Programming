#include<iostream>
#include<cstdio>
#define limit 2000000001
using namespace std;
int main()
{
	long long int n,k,min,max,i;
	cin >> n;
	cin >> k;
	max = -1*limit;
	min = limit;
	long long int a[n+1];
	for(i=1;i<=n;i++)
	{
		cin >> a[i];
		if(a[i]>=max)
			max=a[i];
		if(a[i]<min)
			min=a[i];
	}

	if(k==0)
	{
		for(i=1;i<n;i++)
			{cout << a[i] << " ";}
		cout<<a[n]<< endl;
	}
	else if(k%2==0 && k!=0){
		for(i=1;i<n;i++)
			{cout << a[i]-min << " ";}
		cout <<a[n]-min<< endl;
	}
	else if(k%2==1)
	{
		for(i=1;i<n;i++)
			{cout <<max - a[i]<< " ";}
		cout <<max - a[n]<< endl;
	}
	return 0;
}