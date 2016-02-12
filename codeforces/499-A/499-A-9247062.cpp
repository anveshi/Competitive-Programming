#include<bits/stdc++.h>
#define lol long long int
#define ulol unsigned long long int
#define pb push_back
#define mp make_pair
#define ss second
#define ff first

using namespace std;

const int MOD = 1000000007;
const int Max = 100002;
int main()
{
	cin.tie(NULL);
	int n,i,j,x,tt;
	cin >> n >> x;
	pair <int,int> a[n];
	for(i=0;i<n;i++){cin>> a[i].ff >> a[i].ss;}
	int ans=0;
	tt = 1;
	for(i=0;i<n;i++)
	{
		while(tt+x<=a[i].ff)tt+=x;
		ans = ans + (a[i].ss-tt+1);
		tt=a[i].ss+1;
	}
	cout << ans << endl;
	return 0;
}