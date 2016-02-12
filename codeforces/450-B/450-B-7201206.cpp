/*

		Monday 21th July 2014
		By ++Anveshi Shukla

*/

#include<bits/stdc++.h>
#define MOD 1000000007
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
	int x,y,n,ans;
	scanf("%d %d %d",&x,&y,&n);
	if(n%3==0){ans=y-x;if(((n-1)/3)%2==1)ans*=-1;}
	else if(n%3==1){ans=x;if(((n-1)/3)%2==1)ans*=-1;}
	else if(n%3==2){ans=y;if(((n-1)/3)%2==1)ans*=-1;}
	while(ans<0)ans+=MOD;
	printf("%d\n",ans%MOD);	
	return 0;
}