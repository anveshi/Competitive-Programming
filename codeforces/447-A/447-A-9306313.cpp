#include<bits/stdc++.h>
#define lol long long int
#define ulol unsigned long long int 
#define mp make_pair
#define pb push_back
#define ff first
#define ss second
using namespace std;
const lol lol_max=numeric_limits<lol>::max();
const int Mod = static_cast<lol>(1e9+7);
int main()
{
	//ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int p,n,i;
	map <int,int> M;
//	M.clear();
	cin >> p >>n;
	int a[n+1];
	for(i=1;i<=n;i++)cin>>a[i];
	for(i=1;i<=n;i++)
	{
		
		if(M[a[i]%p])
		{
			cout<<i<<endl;return 0;
		}
		M[a[i]%p]=1;
	}
	cout << -1  << endl;
	return 0;
}