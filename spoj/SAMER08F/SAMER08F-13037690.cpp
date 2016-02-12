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
	int n;
	while(scanf("%d",&n))
	{
		if(n==0)break;
		cout << ((n)*(n+1)*(2*n+1))/6 << endl;
	}
	return 0;
}
