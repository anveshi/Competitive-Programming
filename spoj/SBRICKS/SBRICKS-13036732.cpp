#include<bits/stdc++.h>
#define lol long long int
#define ulol unsigned long long int
#define mp make_pair
#define pb push_back
#define ff first
#define ss second
using namespace std;
int main()
{
	//ios_base::sync_with_stdio(false); 
	cin.tie(NULL);
	lol i,n,s=0;
	cin >> n;
	int a[105];
	for(i=0;i<n;i++)
	{
		cin >> a[i];
		s+=a[i];
	}
	lol avg=s/n;
	lol ans=0;
	for(i=0;i<n;i++)
		if(a[i]>avg)ans+=a[i]-avg;
	cout << ans << endl;
	return 0;
}
