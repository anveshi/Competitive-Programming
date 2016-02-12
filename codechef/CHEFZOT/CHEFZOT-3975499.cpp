#include<iostream>
using namespace std;
int main()
{
	int N;
	cin >> N;
	int a[N+1],d[N+1];
	for(int i=0;i<N;i++)
	{
		a[i]=d[i]=0;
	}
	int ans=0;
	for(int i=1;i<=N;i++)
	{
		cin >> a[i];
		if(a[i]!=0)
			d[i]=d[i-1]+1;
		else
			d[i]=0;
		if(d[i] > ans)
			ans = d[i];

	}
	cout << ans << endl;
	return 0;
}