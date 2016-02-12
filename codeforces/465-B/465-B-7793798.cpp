#include<bits/stdc++.h>
#define mod 1000000007
#define llong long long int
#define ulong unsigned ling long int
using namespace std;
int main()
{
	int n,i;
	cin >> n;
	bool a[n+1];
	int count=0,flag=0;
	a[0]=0;
	for(i=1;i<=n;i++)
	{
		cin>> a[i];
		if(a[i]==1)
			count++;
		if(a[i]==1 && a[i-1]==0)
			flag++;
	}
	if(flag+count >0)
		flag-=1;
	cout << flag+count <<  endl;
	
	
	return 0;
}