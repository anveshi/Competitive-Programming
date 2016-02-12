/*

		Sunday 27th July 2014
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
	vector <string> v;
	v.pb("vaporeon");
	v.pb("jolteon");
	v.pb("flareon");
	v.pb("espeon");
	v.pb("umbreon");
	v.pb("leafeon");
	v.pb("glaceon");
	v.pb("sylveon");
//	for(int i=0;i<8;i++)
//		cout << v[i] << endl;
	int n,res=0;
	scanf("%d",&n);
	char s[10];
	scanf("%s",s);
	int i,j;
	for(i=0;i<8;i++)
	{
		if(sz(v[i])==n){
		for(j=0;j<n;j++)
		{
			if(s[j]==v[i][j] || s[j]=='.')
				continue;
			else break;
		}
		if(j==n)
		{res=i; break;}}
	}
	cout << v[res] << endl;
	return 0;
}