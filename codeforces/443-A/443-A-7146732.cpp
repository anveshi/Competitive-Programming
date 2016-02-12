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
	char c;
	set <char> S;
	S.clear();
	while(scanf("%c",&c))
	{
	if(c=='}')break;
	else if(c >='a' && c <='z') S.insert(c);
	}
	cout << sz(S) << endl;
	return 0;
}