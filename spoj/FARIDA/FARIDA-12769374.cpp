//anveshi
#include<bits/stdc++.h>
#define lol long long int
#define ulol unsigned long long int
#define mp make_pair
#define pb push_back
#define ff first
#define ss second
lol a[12345];
lol res[12345];
lol n;
using namespace std;
lol f(lol i)
{
	if(res[i]!=-1)return res[i];
	if(i>=n)return res[i]=0;
	if(i==n-1)return res[i]=a[n-1];
	else 
	{
		res[i]=max(a[i]+f(i+2),f(i+1));
		return res[i];
	}
}
int main()
{
	//ios_base::sync_with_stdio(false); 
	cin.tie(NULL);
	int t,m;
	cin >> t;
	m=0;
	while(t--){
	m++;
	cin >> n;
	for(int i=0;i<10005;i++)res[i] = -1;
	for(lol i=0;i<n;i++)
		cin >> a[i];
	cout << "Case " << m << ": " << f(0) << endl;
	}
	return 0;
}
