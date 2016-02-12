/*

		Friday 18th July 2014
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
	char S[402];
	memset(S,'\0',sizeof(char)*402);
	scanf("%s",S);
	int l=strlen(S);
	int k;
	cin >> k;
	for(int i=l;i<l+k;i++)S[i]='?';
	//cout << S << endl;
	int ans=0;
	int i,j;
	for(i=0;i<l+k;i++)
	{
		for(j=i+1;j<l+k;j+=2)
		{
			int d=(j-i+1);int p;
			int flag=1;
			for(p=0;p<d/2;p++)
			{
				if(S[i+p]==S[i+d/2+p] || S[i+p]=='?' || S[i+d/2+p]=='?')
					continue;else {flag=0;break;};
			}
			if(flag==1 && d>ans)ans=d;
		}
	}
	cout << ans << endl;
	return 0;
}