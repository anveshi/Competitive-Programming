#include<bits/stdc++.h>
#define lol long long int
#define ulol unsigned long long int
#define pb push_back
#define mp make_pair
#define ff first
#define all(c) (c).begin(),(c).end() 
#define tr(c,i) for(typeof((c).begin() i = (c).begin(); i != (c).end(); i++) 

using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	lol x,y,n,m,i,k,ans;
	cin >> n >> k;
	vector <int> v;
	for(i=0;i<n;i++)
	{
		cin >> x;
		v.pb(x-1);
	}
	sort(v.rbegin(),v.rend());
	ans=0;
	for(i=0;i<n;i=i+k)
	{
	ans=ans+2*v[i];
	}
	cout << ans << endl;


	return 0;
}