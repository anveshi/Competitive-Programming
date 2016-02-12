#include<bits/stdc++.h>
using namespace std;
#define sz(a) ((a).size()) 
#define pb push_back 
#define langoor long long int
int main()
{
	langoor n,i,ans,j;
	cin >> n;
	vector <langoor> a(n);
	for(i=0;i<n;i++)
		cin >> a[i] ;
	sort(a.rbegin(),a.rend());
	if(n==1)
		cout << a[0] << endl;
	else
	{
		ans=a[0]*n+a[1]*n;
		j=1;
		for(i=2;i<n;i++)
		{	ans+=(n-j)*a[i];j++;}
		cout << ans << endl;

	}
	return 0;
}