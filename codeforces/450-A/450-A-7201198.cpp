/*

		Monday 21th July 2014
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
int ceil(int a,int b)
{
	return((a/b)+(a%b!=0));
}
int main()
{	
	// code starts here
	int n,m;
	scanf("%d %d",&n,&m);
	int a[n];
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
	int maxwell=0;int ans=1;
	for(int i=0;i<n;i++)
	{
		int x;
		x=ceil(a[i],m);
		if(x>=maxwell)
		{
			maxwell=x;
			ans=i+1;
		}
	}
	printf("%d\n",ans);
	return 0;
}