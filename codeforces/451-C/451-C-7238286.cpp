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
#define lli long long int 
int main()
{	
	// code starts here
	int t,j,i;
	lli n,k,d1,d2;
	scanf("%d",&t);
	while(t--)
	{
		cin >> n >> k >> d1 >> d2;
		int flag=0;
		lli a[4][3],x[5];
		x[1]=(k-2*d1-d2);
		x[2]=(k-2*d1+d2);
		x[3]=(k+2*d1-d2);
		x[4]=(k+2*d1+d2);
		a[0][0]=x[1]/3;a[0][1]=x[1]/3+d1;a[0][2]=a[0][1]+d2;
		a[1][0]=x[2]/3;a[1][1]=x[2]/3+d1;a[1][2]=a[1][1]+(-1*d2);
		a[2][0]=x[3]/3;a[2][1]=x[3]/3+(-1*d1);a[2][2]=a[2][1]+d2;
		a[3][0]=x[4]/3;a[3][1]=x[4]/3+(-1*d1);a[3][2]=a[3][1]+(-1*d2);
		if(n%3!=0)flag=0;
		else if(n%3==0)
		{
		for(i=0;i<4;i++)
		{
			if(x[i+1]%3!=0)continue;
			if(a[i][0] <=n/3 &&a[i][0]>=0 && a[i][1] <=n/3 && a[i][1]>=0 && a[i][2] <=n/3 && a[i][2]>=0)
			{flag=1;break;}

		}
		}
		if(flag==1)
		{
		//	for(j=0;j<3;j++)cout << a[i][j] << endl;
			cout << "yes\n";
		}
		else cout << "no\n" ;
	}
	return 0;
}