#include<bits/stdc++.h>
#define lol long long int
#define ulol unsigned long long int
#define mp make_pair
#define pb push_back
#define ff first
#define ss second
using namespace std;
int main()
{
	//ios_base::sync_with_stdio(false); 
	cin.tie(NULL);
	lol n,i,j,ans,sq,cnt=0;
	cin >> n;
	for(i=1;i<=n;i++)
	{
		sq=sqrt(i);
		for(j=1;j<=sq;j++)
		{
			if(i%j==0)cnt++;
		}
	}
	cout << cnt << endl;

	return 0;
}
