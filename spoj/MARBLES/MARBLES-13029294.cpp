#include<bits/stdc++.h>
#define lol long long int
#define ulol unsigned long long int
#define mp make_pair
#define pb push_back
#define ff first
#define ss second
using namespace std;
lol ncr(lol nn,lol rr)
{
	lol ans=1;
	for(lol i=1;i<=rr;i++)
	{
		ans=ans*(nn+1-i)/i;
	}
	return ans;
}
int main()
{
	//ios_base::sync_with_stdio(false); 
	cin.tie(NULL);
	lol t,n,k,i;
	cin >> t ;
	while(t--)
	{
		cin >> n  >> k;
		cout << ncr(n-1,min(n-k,k-1)) << endl;
	}
	return 0;
}
