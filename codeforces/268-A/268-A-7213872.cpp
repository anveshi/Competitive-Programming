/*

		Thursday 24th July 2014
		By ++Anveshi Shukla

*/

#include<bits/stdc++.h>
#define sz(a) int((a).size())
#define pb push_back
#define all(c) (c).begin(),(c).end()
#define tr(c,i) for(typeof((c).begin() i=(c).begin() ;i!=c.end();i++)
#define present(c,x) ((c).find(x)!=(c).end())
#define cpresent(c,x) (find(all(c),x)!=(c).end())
using namespace std;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int,int> ii;
int main()
{	
	// code starts here
	int n;
	scanf("%d",&n);
	//int g[n],h[n];
	vi g(n,0),h(n,0);
	vi a(101,0);
	for(int i=0;i<n;i++)
	{
		scanf("%d %d",&g[i],&h[i]);
		a[h[i]]++;
	}
	int sum=0;
	for(int i=0;i<n;i++)
	{
		sum+=a[g[i]];
	}
	printf("%d\n",sum);
	return 0;
}