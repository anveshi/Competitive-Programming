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
	int n,m,ans,i;
	scanf("%d %d",&n,&m);
	ans=min(m,n)+1;
	printf("%d\n",ans);
	for(i=0;i<ans;i++)
	{
		printf("%d %d\n",i,m-i);
	}
	return 0;
}