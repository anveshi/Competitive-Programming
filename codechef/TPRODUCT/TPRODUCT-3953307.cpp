#include<bits/stdc++.h>
#define limit 1000000007
int maxwell(int a,int b)
{
	return (a >b?a:b);
}
using namespace std;
unsigned long long int a[33000];
double b[33000];
int main()
{
	unsigned long long int H,x,m;
	while(1)
	{
		cin >> H;
		if(H==0)
			break;
		x=pow(2,H);
		for(int i=1;i<x;i++)
		{
			cin >> a[i];
			b[i]=log(a[i]);
		}
		for(int i=((x-1)/2);i>0;i--)
		{
			if(b[i*2]>b[i*2+1])
			{
				a[i]=a[i]*a[i*2];
				b[i]=b[i]+b[i*2];
			}
			else
			{
				a[i]=a[i]*a[i*2+1];
				b[i]=b[i]+b[i*2+1];
			}
			a[i]=a[i]%limit;
		}
		cout << a[1] << endl;
	}
	return 0;
}