#include<bits/stdc++.h>
#define pb push_back
#define mp make_pair
using namespace std;
int main()
{
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL);
	int n,m,a,b,z,ans,z1,z2;
	cin >> n >> m >> a >> b;
	if(m*a < b)
	{	
		ans=n*a;
	}
	else		
	{
		ans=(b*(n/m))+min(((n%m)*a),b);
	}
	cout << ans << endl;
	return 0;
}