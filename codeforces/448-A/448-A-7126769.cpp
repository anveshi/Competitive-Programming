/*

		Thursday 17th July 2014
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
	int a1,a2,a3,b1,b2,b3,n;
	scanf("%d %d %d",&a1,&a2,&a3);  //cups
	scanf("%d %d %d",&b1,&b2,&b3);  // medals
	scanf("%d",&n);
	int x,y;
	x=(a1+a2+a3+4)/5;
	y=(b1+b2+b3+9)/10;
	if(x+y<=n)printf("YES\n");
	else printf("NO\n");
	return 0;
}