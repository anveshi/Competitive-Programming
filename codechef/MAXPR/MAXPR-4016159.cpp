#include<iostream>
#include<cmath>
#define limit 1000000007
#define PT pow(2,32)
#define TWO 2
#define uul  long long int
using namespace std;
inline uul power(uul k)
{
	uul i;
	uul ans=1;
	while(k>32)
	{
		ans=ans*PT;
		if(ans > limit)
			ans%=limit;
		k=k-32;
	}
	for(i=0;i<k;i++)
	{
		ans=ans*2;
	}
	return (ans%limit);
}
uul shukla1[101][100];
uul shukla2[101][100];
int main()
{
	uul i,j,x,nos,result,t,y;
	int n;
	cin >> t;
	while(t--)
	{
	cin >> n;	
	uul a[n];
	for(i=0;i<101;i++)
	{
		for(j=0;j<100;j++)
		{
			shukla1[i][j]=0;shukla2[i][j]=0;
		}
	}

	for(i=0;i<n;i++)
		cin >> a[i];
	for(i=0;i<n;i++)
	{
		shukla1[a[i]][0]+=1;
		for(x=1;x<a[i];x++)
		{
			shukla1[a[i]][x]=shukla1[a[i]][x]+shukla1[a[i]-x][0]+shukla1[a[i]-x][x];
			if(shukla1[a[i]][x] > limit)
				shukla1[a[i]][x]%=limit;
		}
		
	}

	for(i=0;i<n;i++)
	{
		shukla2[a[i]][0]+=1;
		for(x=1;x+a[i]<=100;x++)
		{
			shukla2[a[i]][x]=shukla2[a[i]][x]+shukla2[a[i]+x][0]+shukla2[a[i]+x][x];
			if(shukla2[a[i]][x] > limit)
				shukla2[a[i]][x]%=limit;
		}
		
	}
	nos=0;
	for(j=1;j<=100;j++)
	{
		nos=nos+power(shukla1[j][0])-1;
		if(nos >limit)
			nos%=limit;
	}
	for(i=1;i<=100;i++)
	{
		for(j=1;j<100;j++)
		{
			nos+=shukla1[i][j]+shukla2[i][j];
			if(nos>limit)
				nos%=limit;
		}
	}
	result=(power(n)-1-nos);
	if(result< 0)
		result+=limit;
	cout  << result << endl;
	}
	return 0;

}